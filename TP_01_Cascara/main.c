#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float suma(float a,float b);
float resta(float a,float b);
float multiplicacion(float a,float b);
float division(float a,float b);

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno=0;
    float numeroDos=0;
    float factorial;

    while(seguir=='s')
    {
        if(numeroUno != 0)
            printf("1- Ingresar 1er operando (A=" && numeroUno && ")\n");
        else
            printf("1- Ingresar 1er operando (A=x)\n");


        printf("2- Ingresar 2do operando (B=y)\n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);




        switch(opcion)
        {
            case 1:                printf("Ingrese el primer numero: \n");
                scanf("%f", &numeroUno);
                printf("Ingrese el primer numero: \n");
                scanf("%f", &numeroUno);
                break;
            case 2:
                printf("Ingrese el segundo numero: \n");
                scanf("%f", &numeroDos);
                break;
            case 3:
                float resultSuma;
                resultSuma=suma(numeroUno,numeroDos);
                printf("La suma es: %f \n",resultSuma);
                break;
            case 4:
                float resultResta;
                resultResta=resta(numeroUno,numeroDos);
                printf("La resta es: %f \n",resultResta);
                break;
            case 5:
                float resultMult;
                resultMult=multiplicacion(numeroUno,numeroDos);
                printf("El producto es: %f \n",resultMult);
                break;
            case 6:
                float resultDiv;
                resultDiv=division(numeroUno,numeroDos);
                printf("El cociente es: %f \n",resultDiv);
                break;
            case 7:
                float resultFactorial;
                resultFactorial=factorial(numeroUno);
                printf("El factorial es: %f \n",resultFactorial);
                break;
            case 8:
                break;
            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
