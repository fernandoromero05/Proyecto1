/*****************************************
 * Nombre: Cuadrado
 * Argumentos: Window *Wventana :   Ventana donde se va a dibujar el cuadrado 
 *             int y            :   Coordenada y de la esquina superior izquierda
 *             int x            :   Coordenada x de la esquina superior izquierda
 *             int lineas       :   Alto del cuadrado medido en líneas
 *             int columnas     :   Ancho del cuadrado medido en columnas
 *             char tipo        :   SOLIDO -> Se dibuja el cuadrado con los caracteres gráficos sólidos
 *                              :   DOSRAYAS -> Se dibuja el cuadrado con los cracteres gráficos de dos rayas simples
 * Descripción: Dibuja un cuadrado en pantalla con los datos dados
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

//Include del módulo funcional
#include "Ventanas.h"

void Cuadrado(WINDOW *Wventana,int y, int x, int lineas, int columnas,char tipo)
{
//Código del alumno


    int i;
    char *linea; //Creamos un puntero tal que decidiremos que tipo de linea utilizar dependiendo en el tipo especificado. Así podemos automatizar el dibujo del cuadrado mediante bucles.
    char linea1[7] ={76, 81, 75, 88, 77, 74, 0}; //LInea singular.
    char linea2[7] = {67, 82, 66, 89, 68, 65, 0};  //Linea doble.

    if (tipo == SOLIDO){ //Selección del tipo de lineas.
        linea = linea1;
    }
    else{
        linea = linea2;
    }
    wattron(Wventana, A_ALTCHARSET);
    mvwaddch(Wventana, y, x, linea[0]); //Bucle para crear la linea horizontal superior.
    for (i=0; i < columnas -2; i++){
        waddch(Wventana, linea[1]);
    }
    waddch(Wventana, linea[2]); //Bucle para crear las lineas verticales.

    for (i=0; i<lineas-2; i++){
        mvwaddch(Wventana, y+1+i, x, linea[3]);
        mvwaddch(Wventana, y+1+i, x + columnas -1, linea[3]);
    }

    mvwaddch(Wventana, y + lineas-1, x, linea[4]); //Bucle para crear la linea horizontal inferior.
    for (i=0; i< columnas -2; i++){
        waddch(Wventana, linea[1]);
    }
    waddch(Wventana, linea[5]);
    wattroff(Wventana,A_ALTCHARSET);
    return;



//*





}