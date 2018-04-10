#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float Calculadora (float numero1, float numero2);
long Factorial(int numeroFactorial);
int main()
{
    char seguir='s';
    int opcion=0;
    float A;
    float B;
    float resultadoFinal;
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
            case 1:
                A=printf("Ingresar primer numero: ");
                scanf("%f", &A);
                break;
            case 2:
                B=printf("Ingresar segundo numero: ");
                scanf("%f", &B);
                break;
            case 3:
                resultadoFinal = Calculadora(A,B);
                printf("El resultado de la suma es: %f ", resultadoFinal);
                break;
            case 4:
                resultadoFinal = Calculadora(A,B);
                printf("El resultado de la resta es: %f", resultadoFinal);
                break;
            case 5:
                resultadoFinal = Calculadora(A,B);
                printf("El resultado de la division es: %f", resultadoFinal);
                break;
            case 6:
                resultadoFinal = Calculadora(A,B);
                printf("El resultado de la multiplicacion es: %f", resultadoFinal);
                break;
            case 7:
                resultadoFinal = Calculadora(A,B);
                printf("El resultado del factorial es: %f", resultadoFinal,Factorial(A));
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

float Calculadora(float numero1, float numero2){
    int resultado;
    int opc;
    scanf("%d",&opc);
    switch(opc){
        case 1:
            resultado = numero1 + numero2;
        break;
        case 2:
            resultado = numero1 - numero2;
            break;
        case 3:
            resultado = numero1 * numero2;
            break;
        case 4:
            resultado = numero1 / numero2;
            break;
        case 5:
            resultado = numero1 * Factorial(numero1);
            resultado = numero2 * Factorial(numero2);
            break;
    }
    return resultado;
}


long Factorial(int numeroFactorial){
    int i;
    long resultado=1;

    for(i=1; i<numeroFactorial; i++){

        resultado= resultado*i;
        printf("El resultado del factorial es: %d", resultado);
    }
    return resultado;
}

