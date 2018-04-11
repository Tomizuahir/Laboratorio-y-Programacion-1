#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*escribir un programa que lea por teclado 10 caracteres, informar cuantas
a e i o u hay*/
int main()
{
    char caracteres;
    int acumuladorA = 0;
    int acumuladorE = 0;
    int acumuladorI = 0;
    int acumuladorO = 0;
    int acumuladorU = 0;
    int i;

    for(i = 0; i<10; i++){
        printf("Ingrese caracteres: ");
        fflush(stdin);
        scanf("%c", &caracteres);

    switch(caracteres){
        case 'a':
        acumuladorA++;
            break;
        case 'b':
            acumuladorE++;
            break;

        case 'i':
              acumuladorI++;
            break;

        case 'o':
                acumuladorO++;
            break;

        case 'u':
                acumuladorU++;
            break;
        }
      }

        printf("Las A que se ingresaron fueron: %d \n", acumuladorA);
        printf("Las E que se ingresaron fueron: %d \n", acumuladorE);
        printf("Las I que se ingresaron fueron: %d \n", acumuladorI);
        printf("Las O que se ingresaron fueron: %d \n", acumuladorO);
        printf("Las U que se ingresaron fueron: %d \n",acumuladorU);




    return 0;
}
