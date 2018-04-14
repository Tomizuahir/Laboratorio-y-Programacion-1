#include <stdio.h>
#include <stdlib.h>

int sumar(float primerNumero,float segundoNumero,float* resultadoSuma)
{
    int retorError = 0;


    *resultadoSuma = primerNumero+segundoNumero;


    return retorError;
}

int restar(float primerNumero,float segundoNumero,float* resultadoResta)
{
    int retornoError = 0;


    *resultadoResta = primerNumero-segundoNumero;


    return retornoError;

}

int dividir(float primerNumero,float segundoNumero,float* resultadoDivision)
{
    int retornoError = -1;

    if(segundoNumero != 0)
    {
       *resultadoDivision=primerNumero/segundoNumero;



        retornoError = 0;
    }


    return retornoError;
}

int multiplicar(float primerNumero,float segundoNumero,float* resultadoMultiplicacion)
{
    int retornoError = 0;



    *resultadoMultiplicacion=primerNumero*segundoNumero;



    return retornoError;
}

int factorial(int numeroFactorial,int* resultadoFactorial)
{
    int i;
    int retornoError = -1;
    int f = 1;

    if(numeroFactorial >=0)
    {

        for(i = numeroFactorial;i >= 1;i--)
            f = f*i;
            *resultadoFactorial = f;


        retornoError = 0;
    }



    return retornoError;
}
