#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void hardcodeo(ePersona persona[],int Caux)
{
    char dniAux[5][20]={"123456","456789","789456","456123","321654"};
    char nombreAux[5][50]={"Juana","Pedro","Anastasia","Vanina","Daniel"};
    int estadoAux[5]={1,1,1,1,1};
    int edadAux[5]={10,20,30,40,50};
    int i=0;

    for(i==0;i<Caux;i++)
    {
        strcpy(persona[i].dni,dniAux[i]);
        strcpy(persona[i].nombre,nombreAux[i]);
        persona[i].estado=estadoAux[i];
        persona[i].edad=edadAux[i];
    }
}


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

void asignarEstado (ePersona persona[],int C,int estado)
{
    int i;
    for (i=0;i<C;i++)
    {
        persona[i].estado=estado;
    }
}

int buscarIndiceLibre (ePersona persona[],int C)
{
    int i = 0;
    int flag=0;

    for(i=0;i<C;i++)
    {
        if(persona[i].estado==-1)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
    {
        return i;
    }else
    {
        return -1; //si no encuentra ubicacion
    }
}

void altaPersona(ePersona persona[],int indice,int estado)
{
    eValidar cadena;
    char seguir='s';

    while(seguir=='s')
    {
        cadena.minimo=1;
        cadena.maximo=50;
        printf("ingrese nombre: ");
        fflush(stdin);
        gets(cadena.buffer);

        if(validarString(cadena)==1)
        {
            strcpy(persona[indice].nombre,cadena.buffer);
            break;
        }
        else
        {
            printf("Nombre invalido, debe ingresar entre 1 y 50 caracteres.\n¿Desea continuar? s/n: ");
            fflush(stdin);
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
            persona[indice].edad = atoi(cadena.buffer);
            break;
        }
        else
        {
            printf("Dato ingresado invalido. Edad permitida entre 1 y 100.¿Desea continuar? s/n: ");
            fflush(stdin);
            scanf("%c",&seguir);
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
            strcpy(persona[indice].dni,cadena.buffer);
            break;
        }
        else
        {
            printf("DNI invalido, debe ingresar entre 5 y 20 caracteres.\n¿Desea continuar? s/n: ");
            fflush(stdin);
            scanf("%c",&seguir);
        }

    }

    if(seguir=='s')
    {
        persona[indice].estado=estado;
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

int buscarPorDni(ePersona persona[], char dni[], int C)
{
    int i;
    int flag = 0;

    for(i=0;i<C;i++)
    {
        if(strcmp(persona[i].dni,dni)==0)
        {
            flag=1;
            break;
        }
    }
    if(flag == 1)
    {
        return i;
    }
    else
    {
        return -1;
    }
}

void bajaPersona (ePersona persona[],int i,int indice)
{
    persona[indice].estado=0;
    printf("Persona eliminada exitosamente.\n\n");
}


void listarPersonas(ePersona persona[],int C)
{
    int i=0;
    int j=0;
    ePersona personaAux;
    printf("DNI\t NOMBRE\t EDAD\t ESTADO\n");
    for(i=0;i<C-1;i++)
    {
        if(persona[i].estado==1)
        {
            for(j=i+1;j<C;j++)
            {
                if(persona[j].estado==1)
                {
                    if (strcmp(persona[i].nombre,persona[j].nombre)>0)
                    {
                        personaAux=persona[i];
                        persona[i]=persona[j];
                        persona[j]=personaAux;
                    }
                }
            }
        }
    }
    for(i=0;i<C;i++)
    {
        if(persona[i].estado==1)
        {
           printf("%s\t%s\t%d\t%d\n",persona[i].dni,persona[i].nombre,persona[i].edad,persona[i].estado);
        }

    }
}


