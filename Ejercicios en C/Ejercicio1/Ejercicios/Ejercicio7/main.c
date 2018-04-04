#include <stdio.h>
#include <stdlib.h>
int getInt(char* mensaje, char* error, int *resultado, int reintentos, int min, int max);
int main()
{
    int resultado;
    getInt("Edad?","el rango es de 0-100",&resultado,2,0,100);
    return 0;
}

int getInt(char* mensaje, char* error, int *resultado, int reintentos, int min, int max){

    int retorno = -1;
    int auxiliarEntero;

        do{
            reintentos--;
            printf("%s", mensaje);
            scanf("%d", &auxiliarEntero);

            if(auxiliarEntero < min || auxiliarEntero > max){
                *resultado = auxiliarEntero;
                break;
            }
            else if(auxiliarEntero > min){
                retorno = -1;
            }
            else{
                retorno = -2;
            }

            printf("%s", error);

        }while(reintentos >=0);

         return *resultado;
    }


