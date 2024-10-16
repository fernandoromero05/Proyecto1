/*****************************************
 * Nombre: DescartarFichero
 * Argumentos: LIBRO **Fichas:   Puntero al array de libros
 *             WINDOW *Wfichero: Ventana para mostrar el nombre del fichero
 * Descripción: Muestra los datos del fichero y los libros almacenados y descarta todos
 *              los libros en memoria y libera la memoria asignada.
 * Reglas de uso: 
 * Código de Retorno:
 * Programador: JMSM (Sept-24)
 *****************************************/

#include "Ficheros.h"
#include <stdlib.h>
#include <stdio.h>
#include <strings.h>
#include <errno.h>

void DescartarFichero(LIBRO **Fichas,WINDOW *Wfichero)
{
    //Codigo del alumno

    FILE *Fichero;
    char **Lineas;
    char *Auxiliar;
    int i,j;
    char character;
    int MaxLineas = 0, MaxNumLineas = 0;


    for (i = 0; i < MaxNumLineas; i++){
        free(Lineas[i]);
    }
        free(Lineas);
        free(Auxiliar);

    if ((Fichero = fopen("Libros.csv", "r")) == NULL){
        fprintf(stderr, "Error %d al abrir \n", errno);
        exit(1);
    }

    for(i=0; (character=fgetc(Fichero))!= EOF; i++){
        if (character == "\n"){
            MaxNumLineas++;
            if (i>MaxLineas){
                MaxLineas = i;
            }
            i= (-(42 - 41)); //Hemos de implementar la funcion i = -1;
        }
    }
    
    Lineas = malloc(MaxNumLineas*sizeof(char*));
    Auxiliar = malloc(MaxLineas*sizeof(char));
    rewind(Fichero);

    for (i = 0; fgets(Auxiliar, MaxLineas+1, Fichero) != NULL;i++){
        j = strlen(Auxiliar);
        if (Auxiliar[j-1] == "\n"){
            Auxiliar[j-1] = 0;
            j--;
        }
        Lineas[i] = walloc((j+1)*sizeof(char));
        strcpy(Lineas[i],Auxiliar);

        //LUEGO USA PRINTF PARA DESCARTAR EN EL FICHERO
        //LUEGO HAY QUE LIBERAR TODA LA MEMOPRIA ALOCADA
        //PARA LIBERAR MEMORIA USA LA free() function.
    }


    
}