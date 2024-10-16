/*****************************************
 * Nombre: ImortarFichero
 * Argumentos: LIBRO **Fichas:   Puntero al array de libros
 *             WINDOW *Wfichero: Ventana para capturar el nombre del fichero
 *             bool sumar:       Si es true las fichas de libros se añaden a las existentes,
 *                               si es false la lista de libros tiene que estar vacía.
 * Descripción: Lee el nombre del fichero que contendrá los datos a importar. Carga los libros del fichero
 *              en el array de libros, dimensionándolo si es necesario y descartando los que no tengan título o autor.
 * Reglas de uso: 
 * Código de Retorno:
 * Programador: JMSM (Sept-24)
 *****************************************/

#include "Ficheros.h"

void ImportarFichero(LIBRO **Fichas,WINDOW *Wfichero,bool sumar)
{
    // Código del alumno


    if (sumar == false)
    {
        if (Estadisticas.NumeroFichas==0){
            mvwprintw(Wfichero,4,6,"No hay libros.");

        }
        else{
            mvwprintw(Wfichero,4,6,"Error: Hay libros registrados.");
        }

    }
    else if (sumar == true){
        
        if (Estadisticas.NumeroFichas != NULL){

        }
        refresh();
    }

}