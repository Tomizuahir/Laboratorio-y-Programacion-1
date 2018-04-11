#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char texto1[10];
    char texto2[10];

    printf("Ingrese primer texto: \n");
    scanf("%s", texto1);
    printf("Ingrese segundo texto: \n");
    scanf("%s", texto2);

    if(strcmp(texto1,texto2)==0){
        printf("Los textos son iguales\n");
    }
    else if(strcmp(texto1,texto2)==1){
        printf("Los textos son desigual positivos\n");
    }
    else{
         printf("Los textos son desigual negativos\n");
    }





    return 0;
}
