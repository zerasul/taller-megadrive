/* Ejemplo 2: Controles. Este ejemplo permite ver como leer de forma sincrona los controles de la megaDrive */
#include <genesis.h>
//Se inclue el fichero de constantes que hemos definido y debe ir en la carpeta inc
#include "constants.h"

//Definicion de la funcion ShowInputStatus; mostrara en pantalla cuando se pulse un boton
void showInputStatus();
//Imprime un caracter en una posicion especifica
void printChar(char *, int, int);

int main()
{
    //Se establece el ancho de pantalla a 320
    VDP_setScreenWidth320();
    //Bucle infinito
    while (1)
    {
        //Se muestra el estado por pantalla
        showInputStatus();
        //Se espera al refresco de pantalla
        SYS_doVBlankProcess();
    }
    return (0);
}

/**
 * Imprime por pantalla un texto en una posicion en Tiles
 * text-> Cadena de texto a imprimir
 * posx-> Posicion X en Tiles (1Tile = 8X8 pixels)
 * posy -> Posicion Y en Tiles (1 Tile = 8x8 Pixels)
 * */
void printChar(char *text, int posx, int posy)
{
    VDP_drawText(text, posx, posy);
}
/**
 * Muestra por pantalla el estado de cada boton pulsado.
 * */
void showInputStatus()
{
    //Se lee el estado del joistick en el puerto 1
    int value = JOY_readJoypad(JOY_1);
    
    if (value & BUTTON_UP)
        printChar(UP_TEXT, POSX_UP, POSY_UP);
    else
        printChar(EMPTY_TEXT, POSX_UP, POSY_UP);

    if (value & BUTTON_LEFT)
        printChar(LEFT_TEXT, POSX_LEFT, POSY_LEFT);
    else
        printChar(EMPTY_TEXT, POSX_LEFT, POSY_LEFT);
    if (value & BUTTON_RIGHT)
        printChar(RIGTH_TEXT, POSX_RIGHT, POSY_RIGHT);
    else
        printChar(EMPTY_TEXT, POSX_RIGHT, POSY_RIGHT);
    if( value & BUTTON_DOWN)
         printChar(DOWN_TEXT, POSX_DOWN, POSY_DOWN);
    else
        printChar(EMPTY_TEXT, POSX_DOWN, POSY_DOWN);

    if (value & BUTTON_A)
        printChar(A_TEXT, POSX_A, POSY_RIGHT);
    else
        printChar(EMPTY_TEXT, POSX_A, POSY_RIGHT);
    
    if(value & BUTTON_B)
        printChar(B_TEXT, POSX_B, POSY_RIGHT);
    else
        printChar(EMPTY_TEXT, POSX_B, POSY_RIGHT);
    
    if(value & BUTTON_C)
        printChar(C_TEXT, POSX_C, POSY_RIGHT);
    else
        printChar(EMPTY_TEXT, POSX_C, POSY_RIGHT);
    
    if(value & BUTTON_START)
        printChar(START_TEXT, POSX_START, POSY_RIGHT);
    else
        printChar(EMPTY_TEXT, POSX_START, POSY_RIGHT);
}
