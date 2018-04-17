#include <stdio.h>
#include <stdlib.h>

int main()
{
    int err,resultado;

    err=getInt("Ingrese un numero entero: ","Error, dato incorrecto.",3,0,100,&resultado);

    if(err==0)
        printf("Todo bien.\n");
    else
        printf("Error.\n");

    return 0;
}
