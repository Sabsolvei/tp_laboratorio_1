#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int Options(char menu[], char error[], int desde, int hasta)
{
    int opcion;
    char respuesta;

    do
    {
        printf("%s", menu);
        scanf("%d",opcion);
        if(opcion<desde || opcion>hasta)
        {
            printf("%s",error);
            scanf("%s",respuesta);
            opcion=-1;
        }
        else
        {
            respuesta='n';
        }
    }
    while(respuesta=='s');

    return opcion;
}



float suma(float a, float b)
{
    float resultadoSuma;
    resultadoSuma = a+b;
    return resultadoSuma;
}

float resta(float a,float b)
{
    float resultadoResta;
    resultadoResta = a-b;
    return resultadoResta;
}

float multiplicacion(float a,float b)
{
    float resultadoMult;
    resultadoMult = a*b;
    return resultadoMult;
}

float division(float a,float b)
{
    float resultadoDiv;
    resultadoDiv = a/b;
    return resultadoDiv;
}

int factorial(int a)
{
    int temp=a;
    int fac=a;
    while(temp>1)
    {
        temp=temp-1;
        fac=fac*temp;
    }
    return fac;
}


