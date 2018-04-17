#include <stdio.h>
#include <stdlib.h>
#include "funcs.h"

float sacarPromedio(int,int);

int main()
{
    int nota1[5]={10,4,2,9,8};
    int nota2[5]={1,8,2,8,10};
    char apellido[5][20]= {"Lopez", "Alvarez", "Zapata", "Perez", "Albornos"};
    float promedio[5];
    int i;

    /*for(i=0; i<5; i++){
        printf("Ingrese la primer nota: ");
        scanf("%d", nota1);


    }*/
    for(i=0; i<5; i++){
        promedio[i]=sacarPromedio(nota1[i],nota2[i]);
    }

    for(i=0; i<5; i++){
        printf("\nAlumno: %s      \tNota 1: %d       \tNota 2: %d      \tPromedio: %f",apellido[i],nota1[i],nota2[i],promedio[i]);

    }

    for(i=0;i<5;i++){

    }

    return 0;
}

float sacarPromedio(int nota1,int nota2){
    float promedio;

    promedio= (float)(nota1+nota2)/2;


    return promedio;
}
