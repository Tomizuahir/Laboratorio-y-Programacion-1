#include <stdio.h>
#include <stdlib.h>

int dividirEnteros(int numero1 ,int numero2){
    int resultado;

    resultado = numero1 / numero2;

    return resultado;
}

int retornarValorEntre(int minimo,int maximo,int* resultado){

    int valor = -1;

    if(valor <= maximo && valor >=minimo){
        *resultado = valor;
        valor = 0;
    }
    return valor;
}
