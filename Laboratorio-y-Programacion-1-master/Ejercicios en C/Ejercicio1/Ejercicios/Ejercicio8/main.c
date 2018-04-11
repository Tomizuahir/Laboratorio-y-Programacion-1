#include <stdio.h>
#include <stdlib.h>
#include "../Calculadora.h"

int main()
{
    int resultado;
    int sePudo;

    resultado = dividirEnteros(100,4);
    printf("%d",resultado);
    sePudo= retornarValorEntre(-40,40, &resultado);
    if(sePudo==0){
        printf("\nSe pudo");
    }
    else{
        printf("No se pudo");
    }
    return 0;
}
