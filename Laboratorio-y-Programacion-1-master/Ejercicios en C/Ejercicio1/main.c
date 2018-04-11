#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD  3
//fflash para limpiar el buffer
//Pedir 3 numeros mayores a 0 y hacer el promedio
int main()
{
    int numero;
    float promedio = 0;
    int i;

    for( i =0; i<CANTIDAD; i++){
        printf("Ingrese numero: ");
        //el bufer espera un numero
        scanf("%d",&numero);

        while(numero < 0){
            printf("ERROR. Ingrese un numero mayor a 0: ");
            scanf("%d",&numero);
        }

        promedio = promedio + numero;

    }
    printf("El resultado del  es: %f", promedio/CANTIDAD);
    return 0;
}
