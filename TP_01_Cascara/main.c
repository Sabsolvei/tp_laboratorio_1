#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numeroUno;
    float numeroDos;
    float resultado;
    int resulfac;
    char menu1[] = "1- Ingresar numeros\n2- Salir\n";
    char menu2[] = "1- Calcular la suma (A+B)\n2- Calcular la resta (A-B)\n3- Calcular la division (A/B)\n4- Calcular la multiplicacion (A*B)\n5- Calcular el factorial (A!)\n6- Calcular todas las operaciones\n7- Salir\n";
    char error[] = "La opcion ingresada no es correcta. Desea continuar?\n";
    int desde;
    int hasta;

    desde=1;
    hasta=2;

    do
    {
        opcion = Options(menu1,error,desde,hasta);

        if(opcion == 1)
        {
            printf("Ingrese el primer numero: ");
            scanf("%f", &numeroUno);

            printf("Ingrese el segundo numero: ");
            scanf("%f", &numeroDos);

            desde = 1;
            hasta = 7;
            opcion = Options(menu2,error,desde,hasta);

            while(numeroDos==0 && opcion==3)
            {
               printf("No es posible dividir a cero. Elija otra opcion:\n");
               opcion = Options(menu2,error,desde,hasta);
            }

            switch(opcion)
            {
                case 1:
                    resultado=suma(numeroUno,numeroDos);
                    printf("La suma es: %.2f \n",resultado);
                    break;
                case 2:
                    resultado=resta(numeroUno,numeroDos);
                    printf("La resta es: %.2f \n",resultado);
                    break;
                case 3:
                    resultado=division(numeroUno,numeroDos);
                    printf("El cociente es: %.2f \n",resultado);
                    break;
                case 4:
                    resultado=multiplicacion(numeroUno,numeroDos);
                    printf("El producto es: %.2f \n",resultado);
                    break;
                case 5:
                    resulfac=factorial(numeroUno);
                    printf("El factorial es: %d\n",resulfac);
                    break;
                case 6:
                    resultado=suma(numeroUno,numeroDos);
                    printf("La suma es: %.2f \n",resultado);

                    resultado=resta(numeroUno,numeroDos);
                    printf("\nLa resta es: %.2f \n",resultado);

                    resultado=division(numeroUno,numeroDos);
                    printf("\nEl cociente es: %.2f \n",resultado);

                    resultado=multiplicacion(numeroUno,numeroDos);
                    printf("\nEl producto es: %.2f \n",resultado);

                    resultado=factorial(numeroUno);
                    printf("\nEl factorial es: %.2f \n",resultado);

                    break;
                case 7:
                    seguir = 'n';
                    break;
            }//end switch
        }
        else
        {
            seguir = 'n';
        }

    }//end while
    while(seguir=='s');

    return 0;
}


    //1- Ingresar 1er operando (A=y)\n 2- Ingresar 2do operando (B=y)
    //menu = "1- Ingresar 1er operando (A=y)\n 2- Ingresar 2do operando (B=y)\n 3- Calcular la suma (A+B)\n 4- Calcular la resta (A-B)\n 5- Calcular la division (A/B)\n 6- Calcular la multiplicacion (A*B)\n 7- Calcular el factorial (A!)\n 8- Calcular todas las operacione\n 9- Salir\n";
    //menu = "hola";
    //error= "chau";
    //error= "Error. Desea continuar?";
