#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#endif // FUNCIONES_H_INCLUDED

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

float factorial(int a)
{
    int temp=a-1;
    int fac = a;
    while(temp>=1)
    {
        fac=a*temp;
    }
    return fac;
}

