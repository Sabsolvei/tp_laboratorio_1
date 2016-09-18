#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define C 3

int main()
{
    ePersona persona[C];
    eMenu opciones;
    strcpy(opciones.menu,"1. Agregar una persona.\n2. Borrar una persona.\n3. Imprimir lista ordenada por nombre.\n4. Imprimir grafico de edades.\n5 Salir.\nINGRESE UNA OPCION: ");
    strcpy(opciones.error,"Ingreso una opcion invalida. Desea continuar? s/n: ");
    opciones.desde=1;
    opciones.hasta=5;
    int opcion;
    char seguir='s';
    int pos=0;

    do
    {
        opcion= validarMenu(opciones);

        switch(opcion)
        {
            case 1:
                altaPersona (persona,pos);
                pos++;
            break;

            case 2:
                //FUNCION BORRAR
                break;
            case 3:
                //FUNCION LISTAR
                break;
            case 4:
                //FUNCION GRAFICO
                break;
            case 5:
                opcion = -1;
                break;
        }

    } while (seguir=='s');


    return;
}
