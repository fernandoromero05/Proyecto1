/*****************************************
 * Nombre: DibujarGestionFichero
 * Argumentos: Window *Wfichero :   Ventana donde se va a dibujar el patrón
 * Descripción: Dibuja el patrón para leer el nombre del fichero y después de tratarlo mostrar
 *              el número de fichas de libros leídas y descartadas.
 * Reglas de uso: 
 * Código de Retorno: N/A
 * Programador: 
 *****************************************/

//Include del módulo funcional
#include "Ventanas.h"

void DibujarGestionFichero(WINDOW *Wfichero)
{
    //Código del alumno
     start_color(); //Inicializamos los colores
    int lineas, columnas;
    char *MenuOpciones[3];
    attron(COLOR_PAIR(5)); //Declaramos el color que queremos utilizar.
    MenuOpciones[0]="Nombre del Fichero:";
    MenuOpciones[1]="Fichas tratadas:";
    MenuOpciones[2]="Fichas descartadas:";

    start_color();
    wbkgd(Wfichero, COLOR_PAIR(9));
    mvwaddstr(Wfichero, 0, 30, "      ");
    getmaxyx(Wfichero, lineas, columnas);
    Cuadrado(Wfichero,1,0, lineas - 1, columnas, SOLIDO);

    for (int i = 0;i <= 2; i++){ //Creamos un bucle que imprima los textos pedidos.

        if (i == 2){
            mvwprintw(Wfichero, 3, 35, MenuOpciones[i]); //Como 'Fichas tratadas' y 'fichas descartadas' ocupan el mismo lugar en el eje x, creo una condicion para que se produzca el output correctamente.
        }
        else{
        mvwprintw(Wfichero, i + 2, 2, MenuOpciones[i]);
        }
    }
    attroff(COLOR_PAIR(5));


}