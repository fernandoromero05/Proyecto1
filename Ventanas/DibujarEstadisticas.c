/*****************************************
 * Nombre: DibujarEstadisticas
 * Argumentos: Window *Westad :   Ventana donde se va a dibujar el patrón
 * Descripción: Dibuja el patrón para er las estadísticas del programa
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

//Include del módulo funcional
#include "Ventanas.h"

void DibujarEstadisticas(WINDOW *Westad)
{
    //Código del alumno
    start_color();
    int lineas, columnas;
    char *MenuOpciones[10]; //Al utilizar un array, no hace falta utilizar el mvwprintw() reitaradamente.

    MenuOpciones[0]="Nombre del Fichero:";
    MenuOpciones[1]="Fichas de Libros:";
    MenuOpciones[2]="Numero de libros con memoria reservada:";
    MenuOpciones[3]="Microsegundos en Importar:";
    MenuOpciones[4]="Microsegundos en Ordenar por Seleccion:";
    MenuOpciones[5]="Microsegundos en Ordenar por Burbuja:";
    MenuOpciones[6]="Microsegundos en Ordenar por Quicksort:";
    MenuOpciones[7]="Microsegundos en Ordenar por Secuencia:";
    MenuOpciones[8]="Microsegundos en Ordenar por Binario:";
    MenuOpciones[9]="Microsegundos en Ordenar por Arbol Binario:";

    start_color();
    wbkgd(Westad, COLOR_PAIR(9));
    mvwaddstr(Westad, 0, 30, "Estadisticas:");
    getmaxyx(Westad, lineas, columnas);
    Cuadrado(Westad,1,0, lineas - 1, columnas, SOLIDO); //Determinamos las dimensiones del cuadrado.

    for (int i = 0;i < 10; i++){

        mvwprintw(Westad, i + 2, 2, MenuOpciones[i]);
    }

    attron(COLOR_PAIR(5));
    mvwprintw(Westad,0,0,"              ");
    mvwprintw(Westad,0,50,"             ");

    attroff(COLOR_PAIR(5));

}