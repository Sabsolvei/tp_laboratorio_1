#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define C 3
#define VACIO -1
#define ALTA 1
#define BAJA 0

int main()
{

    ePersona persona[C];
    eMenu opciones;
    strcpy(opciones.menu,"1. Agregar una persona.\n2. Borrar una persona.\n3. Imprimir lista ordenada por nombre.\n4. Imprimir grafico de edades.\n5. Salir.\nINGRESE UNA OPCION: ");
    strcpy(opciones.error,"Ingreso una opcion invalida. Desea continuar? s/n: ");
    opciones.desde=1;
    opciones.hasta=5;
    int opcion;
    char seguir='s';
    int pos=0;
    char dni[20];

    asignarEstado(persona,C,VACIO);

    do
    {
        opcion= validarMenu(opciones);

        switch(opcion)
        {
            case 1:

                pos=buscarIndiceLibre(persona,C);

                if(pos >= 0)
                {
                    altaPersona(persona,pos,C);
                }
                else
                {
                    printf("Supero el espacio permitido para carga.");
                }
                break;
            case 2:

                printf("Ingrese DNI a eliminar: ");
                gets(dni);
                pos=buscarPorDni(persona, dni, C);

                if(pos >= 0)
                {
                    bajaPersona (persona,C,pos);
                }
                 else
                {
                    printf("Supero el espacio permitido para carga.");
                }
                break;

            case 3:

                listarPersonas(persona,C);
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

