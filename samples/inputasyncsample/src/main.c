/* Ejemplo 4: Controles Asincronos. Uso de interrupciones para manejar controles.
*/
#include <genesis.h>
//Libreria de constantes
#include "constants.h"
//Manejador de entrada
void inputHandler(u16,u16,u16);
//Imprime un mensaje en pantalla
void printChar(char*, int, int);
//Funcion principal
int main()
{
    //inicializacion del sistema de controles
    JOY_init();
    //Establecemos el manejador de entrada
	JOY_setEventHandler( inputHandler );
    while(1)
    {
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
 * Manejador de entrada
 * joy-> Indica el mando que ha activado la entrada
 * state -> Indica el estado del mando (boton activado)
 * changed -> indica si ha cambiado (pulsado o solatado)
 * */
void inputHandler(u16 joy, u16 state, u16 changed)
{

		if (joy == JOY_1) {
			printChar(PLAYER_1, POSX_START, POSY_UP);
		}else{
			printChar(EMPTY_TEXT, POSX_START, POSY_UP);
		}

        if (changed & state & BUTTON_START)
		{
			printChar(START_TEXT, POSX_START, POSY_RIGHT);
		}
		else 
		{
			printChar(EMPTY_TEXT, POSX_START, POSY_RIGHT);	
		}

        if (changed & state & BUTTON_UP)
		{
			printChar(UP_TEXT, POSX_UP, POSY_UP);
		}
		else 
		{
			printChar(EMPTY_TEXT, POSX_UP, POSY_UP);	
		}

        if (changed & state & BUTTON_LEFT)
		{
			printChar(LEFT_TEXT, POSX_LEFT, POSY_LEFT);
		}
		else 
		{
			printChar(EMPTY_TEXT, POSX_LEFT, POSY_LEFT);	
		}

        if (changed & state & BUTTON_DOWN)
		{
			printChar(DOWN_TEXT, POSX_DOWN, POSY_DOWN);
		}
		else 
		{
			printChar(EMPTY_TEXT, POSX_DOWN, POSY_DOWN);	
		}

        if (changed & state & BUTTON_RIGHT)
		{
			printChar(RIGTH_TEXT, POSX_RIGHT, POSY_RIGHT);
		}
		else 
		{
			printChar(EMPTY_TEXT, POSX_RIGHT, POSY_RIGHT);	
		}


        if (changed & state & BUTTON_A)
		{
			printChar(A_TEXT, POSX_A, POSY_RIGHT);
		}
		else 
		{
			printChar(EMPTY_TEXT, POSX_A, POSY_RIGHT);	
		}

        if (changed & state & BUTTON_B)
		{
			printChar(B_TEXT, POSX_B, POSY_RIGHT);
		}
		else 
		{
			printChar(EMPTY_TEXT, POSX_B, POSY_RIGHT);	
		}

        if (changed & state & BUTTON_C)
		{
			printChar(C_TEXT, POSX_C, POSY_RIGHT);
		}
		else 
		{
			printChar(EMPTY_TEXT, POSX_C, POSY_RIGHT);	
		}

}
