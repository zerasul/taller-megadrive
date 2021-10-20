
Para poder trabajar con SGDK, necesitamos conocer la estructura de un proyecto para saber donde colocar los ficheros:

* carpeta _src_; donde se incluiran los ficheros de código (.c, .s ,etc...).
* carpeta _inc_; donde se pondran los ficheros de cabeceras (.h, .m,etc...).
* carpeta _res_; donde se incluiran los ficheros de recursos (imagenes, sonido, otros recursos).

Para empezar, vamos a crear una carpeta (podemos usar _Visual Studio Code_); donde se creará una carpeta llamada _src_ ; dentro de esta carpeta crearemos el fichero _hello.c_; con el siguiente contenido:

```c
/*Ejemplo 1: Hola Mundo.*/
//Incluir la libreria
#include <genesis.h> 

//Funcion principal
int main()
{
    //Se muestra el texto Hello Sega en pantalla en la coordenada 10, 13 (esta en tiles no en pixels).
	VDP_drawText("Hello Sega!", 10, 13); 

	while(1) //Bucle infinito para el juego
	{
		
		//Se espera el refresco de pantalla
		SYS_doVBlankProcess();
	}
	return (0);
}
```

Una vez escrito el codigo podemos usar Visual studio code para ejecutar el siguiente comando:

* Windows:

```bash
%GDK_WIN%\bin\make -f %GDK_WIN%\makefile.gen
```

* Linux/Unix

```bash
make -f $GENDEV/sgdk/mkfiles/makefile.gen clean all
```

* MacOs (Usando Wine)

```bash
WINEPREFIX=$GENDEV/wine wine cmd
%GDK_WIN%\bin\make -f %GDK_WIN\makefile.gen
```

!!! note
    Quizas para linux o para Windows, puede ser necesario copiar el makefile que nos define en el kit de desarrollo.

Una vez compilado, puede encontrarse en el directorio _out_ un fichero llamado _rom.bin_; el cual incluye la rom ya compìlada y lista para ser usada en un emulador (o hardware con un cartucho con tarjeta Flash).

!!! note
	Todos los ejemplos, estaran disponibles en el repositorio de este mismo taller.
