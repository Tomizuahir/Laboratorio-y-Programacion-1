#include <stdio.h>
#include <stdlib.h>
int suma(int numero1, int numero2);
int main()
{
    int num1, num2, resultadoFinal;
    printf("Ingrese primer numero\n");
    scanf("%d", &num1);
    printf("Ingrese segundo numero\n");
    scanf("%d", &num2);

    resultadoFinal = suma(num1,num2);
    printf("el resultado de la suma es: %d ",resultadoFinal);
    return 0;
}

int suma(int numero1, int numero2){
    int resultado;

    resultado = numero1+numero2;

    return resultado;
}
