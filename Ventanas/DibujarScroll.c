/*****************************************
 * Nombre: DibujarScroll
 * Argumentos: Window *Wlistado:   Ventana donde se va a dibujar el patrón
 * Descripción: Dibuja el patrón para los listados de libros, con 10 fichas por pantalla.
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

////Include del módulo funcional
#include "Ventanas.h"

void DibujarScroll(WINDOW *Wlistado)
{
    start_color();
    int i, x, y;
    int lineas, columnas;

    char linea1[7] ={76, 81, 75, 88, 77, 74, 0}; //LInea singular.

    wbkgd(Wlistado, COLOR_PAIR(9));
    mvwaddstr(Wlistado, 0, 30, "Listado de Libros:");
    getmaxyx(Wlistado, lineas, columnas);

    Cuadrado(Wlistado,1,0, lineas - 1, columnas, SOLIDO);   

    mvwprintw(Wlistado,2,3, "Numero");
    mvwprintw(Wlistado,2,20, "Titulo");
    mvwprintw(Wlistado,2,50, "Autor"); //Declaramos los valores (x,y) tal que los tres titulos esten en la misma linea.
    Cuadrado(Wlistado, 1, 0, lineas-13, columnas, SOLIDO);

    //mvwprintw(Wlistado,70,1, "ESC = Salir Flechas = Subir/Bajar AvPag/RePag = Pag  siguiente/anterior");

    wcolor_set(Wlistado,1,NULL);
    mvwprintw(Wlistado, lineas - 0.0000005, 3,"ESC = Salir Flechas = Subir/Bajar AvPag/RePag = Pag  siguiente/anterior");





}