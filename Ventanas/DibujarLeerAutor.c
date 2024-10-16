/*****************************************
 * Nombre: DibujarLeerAutor
 * Argumentos: Window *Wautor:   Ventana donde se va a dibujar el patrón
 * Descripción: Dibuja el patrón para leer el comienzo del apellido del autor(es) de los que se desean
 *              buscar y listar sus libros.
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

//Include del módulo funcional
#include "Ventanas.h"

void DibujarLeerAutor(WINDOW *Wautor)
{
    //Código del alumno
    start_color();
    int lineas, columnas;
    char *MenuOpciones[2];
    wattron(Wautor, A_ALTCHARSET);
    getmaxyx(Wautor, lineas, columnas);
    Cuadrado(Wautor,1,0, lineas - 1, columnas, SOLIDO);
    wbkgd(Wautor, COLOR_PAIR(9));


    mvwprintw(Wautor,0,30,"Busqueda por Autor");
    mvwprintw(Wautor,2,2, "Apellidos del Autor:");
}