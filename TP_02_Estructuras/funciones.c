#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define C 3
int validarMenu (eMenu opciones)
{
    int opcion;
    char respuesta='s';

    do
    {
        printf(opciones.menu);
        fflush(stdin);
        scanf("%d",&opcion);

        if(opcion>=opciones.desde && opcion<=opciones.hasta)
        {
            break;
        }
        else
        {
            system("cls");
            printf("%s",opciones.error);
            fflush(stdin);
            getc(respuesta);
            opcion=-1;
        }
    }
    while(respuesta=='s');

    return opcion;
}

void altaPersona(ePersona persona[],int pos)
{
    eValidar cadena;
    cadena.minimo=1;
    cadena.maximo=50;
    char seguir='s';


    while(seguir=='s')
    {
        printf("ingrese nombre: ");
        fflush(stdin);
        gets(cadena.buffer);

        if(validarString(cadena)==1)
        {
            strcpy(persona[pos].nombre,cadena.buffer);
            break;
        }
        else
        {
            printf("Nombre invalido, debe ingresar entre 1 y 50 caracteres.\n¿Desea continuar? s/n: ");
            getc(seguir);
        }
    }


    while(seguir=='s')
    {
        printf("Ingrese edad: ");
        fflush(stdin);
        gets(cadena.buffer);
        cadena.minimo=1;
        cadena.maximo=100;

        if(validarInt(cadena)==1)
        {
            persona[pos].edad = atoi(cadena.buffer);
            break;
        }
        else
        {
            printf("Dato ingresado invalido. Edad permitida entre 1 y 100.\n¿Desea continuar? s/n: ");
            getc(seguir);
        }
    }


    while(seguir=='s')
    {
        printf("Ingrese DNI: ");
        fflush(stdin);
        gets(cadena.buffer);
        cadena.minimo=5;
        cadena.maximo=20;

        if(validarString(cadena)==1)
        {
            strcpy(persona[pos].dni,cadena.buffer);
            break;
        }
        else
        {
            printf("DNI invalido, debe ingresar entre 5 y 20 caracteres.\n¿Desea continuar? s/n: ");
            getc(seguir);
        }
    }


    if(seguir=='s')
    {
        persona[pos].estado=1;
    }

}

int validarInt(eValidar cadena)
{
    int edad;
    edad=atoi(cadena.buffer);
    if(edad>=cadena.minimo && edad<=cadena.maximo)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int validarString(eValidar cadena)
{
    if((strlen(cadena.buffer)>= cadena.minimo) && (strlen(cadena.buffer)<=cadena.maximo))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

