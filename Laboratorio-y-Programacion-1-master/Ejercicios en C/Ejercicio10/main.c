#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int esUnEntero(char *cadena);
int main()
{
    char cadena[1000];
    char error[1000];
    int caracteres;
    int resultado;

    printf("ingrese nombre: \n");
    gets(cadena);
    caracteres=strlen(cadena);
    printf("La cantidad de letras son: %d\n",caracteres);

    printf("es entero?: %d\n",esUnEntero(cadena));

    printf("%d",getInt(cadena,error,5,2,8,&resultado));

    return 0;
}


