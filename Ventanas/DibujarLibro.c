/*****************************************
 * Nombre: DibujarLibro
 * Argumentos: Window *Wlibro:   Ventana donde se va a dibujar el patrón
 * Descripción: Dibuja el patrón para mostrar o capturar los datos de las fichas de un libro.
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

//Include del módulo funcional
#include "Ventanas.h"

void DibujarLibro(WINDOW *Wlibro)
{ 
    //Código del alumno
    start_color();
    int lineas, columnas;
    char *MenuOpciones[7]; //Usamos el mismo metodo de antes para la declaración del array.

    MenuOpciones[0]="Numero de Libro:";
    MenuOpciones[1]="Titulo del Libro:";
    MenuOpciones[2]="Apellidos del Autor:";
    MenuOpciones[3]="Nombre del Autor:";
    MenuOpciones[4]="Genero del Libro:";
    MenuOpciones[5]="Editorial del Libro:";
    MenuOpciones[6]="Coleccion del Libro:";


    wbkgd(Wlibro, COLOR_PAIR(9));
    mvwaddstr(Wlibro, 0, 30, "Gestion de Libros:");
    getmaxyx(Wlibro, lineas, columnas);
    Cuadrado(Wlibro,1,0, lineas - 1, columnas, SOLIDO);

    for (int i = 0; i <= 6; i++){ //Hemos de incluir el 6 mediante el uso de <= para asegurar que 'Coleccion del libro' tambien se imprima.

        mvwprintw(Wlibro, i + 2, 2, MenuOpciones[i]);
    }

    attron(COLOR_PAIR(5));
    mvwprintw(Wlibro,0,0,"              ");
    mvwprintw(Wlibro,0,50,"             ");

    attroff(COLOR_PAIR(5));


}