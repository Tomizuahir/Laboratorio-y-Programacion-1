#include <stdio.h>
#include <stdlib.h>
#include "Calculadora.h"


int main()
{
    char seguir='s';
    int opcion=0;
    float A;
    float B;
    int numFactorial;
    float resultadoFinal;
    int resultadoFactorial;
    while(seguir=='s')
    {
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
        fflush(stdin);

        while(opcion < 1 || opcion >9){
            printf("Error: Ingrese una opcion del 1 al 9\n");
        }
        system("cls");

        switch(opcion)
        {
            //Se ingresa el primer numero
            case 1:
                A=printf("Ingresar primer numero: ");
                scanf("%f", &A);
                break;
            //Se ingresa el segundo numero
            case 2:
                B=printf("Ingresar segundo numero: ");
                scanf("%f", &B);
                break;
             //Se muestra la suma de los numeros ingresados
            case 3:
                sumar(A,B,&resultadoFinal);
                printf("\nEl resultado de la suma de los numeros: %f y %f es: %f \n",A,B, resultadoFinal);
                break;
              //Se muestra la resta de los numeros ingresados
            case 4:
                restar(A,B,&resultadoFinal);
                printf("\nEl resultado de la resta de los numeros: %f y %f es: %f\n",A,B, resultadoFinal);
                break;
              //Se muestra la division de los numeros ingresados
            case 5:
                dividir(A,B,&resultadoFinal);
                printf("\nEl resultado de la division de los numeros:%f y %f es: %f\n",A,B, resultadoFinal);
                break;
             //Se muestra la multiplicacion de los numeros ingresados
            case 6:
                multiplicar(A,B,&resultadoFinal);
                printf("\nEl resultado de la multiplicacion de los numeros:%f y %f es: %f\n",A,B, resultadoFinal);
                break;
             //Se muestra el factorial de los numeros ingresados
            case 7:
                numFactorial=(int)A;
                factorial(numFactorial,&resultadoFactorial);
                printf("\nEl resultado del factorial de los numeros: %f y %f es: %d\n",A,B,resultadoFactorial);
                break;
             // Se muestran todos los calculos
            case 8:
                sumar(A,B,&resultadoFinal);
                printf("\nEl resultado de la suma de los numeros: %f y %f es: %f \n",A,B, resultadoFinal);
                break;

                restar(A,B,&resultadoFinal);
                printf("\nEl resultado de la resta de los numeros: %f y %f es: %f\n",A,B, resultadoFinal);
                break;

                dividir(A,B,&resultadoFinal);
                printf("\nEl resultado de la division de los numeros:%f y %f es: %f\n",A,B, resultadoFinal);
                break;

                multiplicar(A,B,&resultadoFinal);
                printf("\nEl resultado de la multiplicacion de los numeros:%f y %f es: %f\n",A,B, resultadoFinal);
                break;

                numFactorial=(int)A;
                factorial(numFactorial,&resultadoFactorial);
                printf("\nEl resultado del factorial de los numeros: %f y %f es: %d\n",A,B,resultadoFactorial);
                break;

            case 9:
                seguir = 'n';
                break;
        }
    }

    return 0;
}



