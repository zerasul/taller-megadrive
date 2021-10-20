# Musica y Sonido en SGDK

A la hora de crear juegos interactivos, siempre es importante el apartado sonoro. En este apartado, vamos a mostrar como añadir música y sonido a nuestros juegos. En este apartado se mostrará como crear y añadir musica a nuestra mega drive.

## Sonido en Mega Drive

En primer lugar, tenemos que ver como funciona el sistema de sonido que trae la sega Mega Drive; Mega Drive dispone de los siguientes chips de sonido:

* Chip Yamaha YM2612 FM Chip.
* Texas Instruments PSG TI6489.
* Procesador Z80 para orquestar el sonido.

Como podemos ver, hay 2 chips de sonido uno FM y otro para sonidos (8bit), estos dos chips son controlados por el controlador Z80 que es el encargado de funcionar.

!!! note
    El procesador Z80 es el encargado de dar retrocompatibilidad con Master System por lo que en dicho modo no se tendrá acceso al chip FM y solo estará disponible el PSG.

El chip Yamaha YM2612, permite hasta 6 canales de audio en estereo teniendo una gran calidad de sonido; además gracias al chip PSG se pueden combinar para poder ejecutar sonido y musica a la vez.

## Formato Música XGM(vgm)

A la hora de trabajar con la musica de Mega Drive /Genesis, vamos a ver un programa llamado VGM Music Maker; el cual nos permitirá poder crear música para el chip Yamaha YM2612 y el PSG a la vez y poder crear nuestra musica a partir de instrumentos sintetizados.

Una vez creada la música se debe exportar en formago XGM (extensión vgm).

Adicionalmente, se pueden añadir ficheros wav para los efectos de sonido.

![vgmmm](../img/VGMmm.PNG)

## Añadir sonido a nuestros juegos

Una vez ya hemos creado la musica y sonidos preparados, vamos añadirlos a nuestro proyecto. En este caso, usaremos de forma analoga a como lo hicimos con los sprites y los fondos. Por lo que crearemos un fichero .res con la siguiente información:

```
XGM sonic1 "sonic1.vgm" AUTO
```

Donde:

* name: nombre del recurso.
* "ruta": ruta del fichero relativa a la carpeta res.
* AUTO: indica el TIMING; puede ser AUTO, PAL o NTSC.

A la hora de añadir ficheros de sonido, tendremos que utilizar la siguiente sintaxis.

```
WAV name "jump.wav" PCM
```

* name: nombre del recurso.
* "ruta". Ruta del fichero relativa a la carpeta res.
* driver: indica el driver a utilizar (PCM, A2ADPCM, 4PCM, XGM).
* outrate: (solo si se usa el driver PCM).

Una vez añadidos los ficheros _.res_, compilaremos el proyecto y ya tendremos el fichero .h generado con todos los recursos.

Tras haber añadido los ficheros, vamos a ver las funciones que podemos utilizar para reproducir musica y sonido con SGDK.

```SND_startPlay_XGM(sonic_music);```

Esta función reproduce la musica usando el fichero en formato XGM. En este caso, se reproducirá por defecto en bucle.

!!! note
    Es recomendable ejecutar esta función deshabilitando las interrupciones; es decir, entre las funciones ```SYS_disableInts()``` y ```SYS_enableInts();```.

```SND_setPCM_XGM(SFX_JUMP, sonic_jump_sfx, sizeof(sonic_jump_sfx))```

Esta función inicializa el recurso de sonido, utilizando el driver correspondiente; en este caso el driver XGM. Estos son los parámetros de esta función:

* ID: Identificador que le daremos al recurso (suele ser un número).
* nombre_recurso: Nombre del recurso definido en el .res.
* tamaño: Tamaño del so0nido.

```SND_startPlayPCM_XGM(SFX_STOP, 1, SOUND_PCM_CH2);```

Esta función reproduce el sonido inicializado con la anterior función seleccionando el canal por que se reproducirá. Estos son los parámetros de la función:

* ID: Identificador que se ha dado al inicializar el sonido.
* N_veces: Nº de veces a reproducir.
* CANAL: Canal en el que reproducir este sonido. por ejemplo SOUND_PCM_CH2.

## Ejemplo con musica.

Para terminar, vamos a finalizar el ejemplo que hemos realizado en este taller, añadiendo música a nuestro juego; para ello, necesitaremos un fichero en formago vgm que puede descargar desde [aquí](../res/ga.zip).

Una vez se ha añadido el fichero, pondremos el siguiente código.

```c
/** Ejemplo5: Ejemplo de planos con Mega Drive **/
//Incluir libreria
#include <genesis.h>

// Incluir los recursos
#include "gfx.h"
#include "sprt.h"
#include "music.h"

//animaciones
#define ANIM_RIGTH 1
#define ANIM_LEFT 3
#define ANIM_DOWN 2
#define ANIM_UP 0
#define ANIM_STAY 4

//Esta funcion nos ayudara a leer los controles
void readcontrollers();

//Sprite Principal
Sprite* mainsprt;
//Sprite Secundario
Sprite* secondsprt;
u32 posx = 45;
u32 posy = 155;
//Funcion Principal
int main()
{
    //array donde se almacenara las paletas
    u16 palette[32];

    

   //Para evitar problemas, se deshabilitan las interrupciones durante la carga
    SYS_disableInts();
    // initializacion a 320 de ancho
    VDP_setScreenWidth320();
   
     // se establecen los colores de la paleta a negro
    VDP_setPaletteColors(0, (u16*) palette_black, 32);

    //Indice para pdoer saber la carga
    u16 ind = TILE_USERINDEX;

    //dibuja un plano a partir de un recurso
    VDP_drawImageEx(BG_B, &bga_image, TILE_ATTR_FULL(PAL1, FALSE, FALSE, FALSE, ind), 0, 0, FALSE, TRUE);
    ind += bga_image.tileset->numTile;
    VDP_drawImageEx(BG_A, &bgb_image, TILE_ATTR_FULL(PAL0, FALSE, FALSE, FALSE, ind), 0, 0, FALSE, TRUE);
    ind += bgb_image.tileset->numTile;
    
    SND_startPlay_XGM(theme);
   
     //Se vuelven a activar las interrupciones
    SYS_enableInts();
     //Inicializa motor de sprites con los parámetros por defecto
    SPR_init(0, 0, 0);
    
    mainsprt = SPR_addSprite(&main_sprt, 15, 125, TILE_ATTR_FULL(PAL2, TRUE, FALSE, FALSE,ind));
    secondsprt= SPR_addSprite(&elli_sprt, 45, 155, TILE_ATTR(PAL3,TRUE,FALSE,FALSE));
    // prepare palettes
    memcpy(&palette[0], bgb_image.palette->data, 16 * 2);
    memcpy(&palette[16], bga_image.palette->data, 16 * 2);
    VDP_setPalette(PAL2,main_sprt.palette->data);
    VDP_setPalette(PAL3, elli_sprt.palette->data);
    SPR_setAnim(mainsprt, ANIM_STAY);
    SPR_setAnim(secondsprt, ANIM_STAY);
     // fade in
    VDP_fadeIn(0, (2 * 16) - 1, palette, 20, FALSE);
    // bucle infinito
    while(1)
    {
        
        readcontrollers();
        //actualiza el VDP
        SPR_update();
        //Esperar refresco
        SYS_doVBlankProcess();
    }

}

void readcontrollers()
{
    //Se lee el estado del joistick en el puerto 1
    int value = JOY_readJoypad(JOY_1);

    if(value & BUTTON_RIGHT){
        SPR_setPosition(secondsprt, posx++, posy);
        SPR_setAnim(secondsprt,ANIM_RIGTH);
    }

    if(value & BUTTON_LEFT){
        SPR_setPosition(secondsprt, posx--, posy);
        SPR_setAnim(secondsprt,ANIM_LEFT);
    }

    if(value & BUTTON_DOWN)
    {
        SPR_setPosition(secondsprt, posx, posy++);
        SPR_setAnim(secondsprt,ANIM_DOWN);
    }

    if(value & BUTTON_UP)
    {
        SPR_setPosition(secondsprt, posx, posy--);
        SPR_setAnim(secondsprt,ANIM_UP);
    }
    if(((!(value & BUTTON_RIGHT)) && (!(value & BUTTON_LEFT))) && ((!(value & BUTTON_DOWN)) && (!(value & BUTTON_UP))))
    {
        SPR_setAnim(secondsprt,ANIM_STAY);
    }
}
```
