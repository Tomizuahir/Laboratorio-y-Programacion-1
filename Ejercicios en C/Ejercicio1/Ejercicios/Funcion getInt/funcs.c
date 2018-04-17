#include <stdio.h>
#include <stdlib.h>

int getInt(char* msg,char* msgE,int cIntentos,long numMin,long numMax,int* result)
{
    int codError=-1;
    long auxNum;
    int intentos=cIntentos;

    do
    {
        printf("%s\n",msg);
        scanf("%ld",&auxNum);

        intentos--;

        if(auxNum<numMin || auxNum>numMax)
        {
            codError=-1;
            printf("%s\n",msgE);
        }
        else
            codError=0;
    }while(codError!=0 && intentos>0);

    if(intentos==0)
        codError=-1;
    else
    {
        codError=0;
        *result=auxNum;
    }

    return codError;
}

int loadIntArrayElements(int* intArray,int qtyArrayElem)
{
    int error=-1;
    int retGetInt;
    int i;

    if(qtyArrayElem>0)
    {
        error=0;
        for(i=0;i<qtyArrayElem;i++)
        {
            do
            {
                retGetInt=getInt("Ingrese un numero: ","Error desconocido!",100,-32768,32767,&intArray[i]);
            }while(retGetInt!=0);
        }
    }

    return error;
}

int promIntArrayElements(int* intArray,int qtyArrayElem,float* promElem)
{
    int error=-1;
    int i;
    float acumIntNums=0;

    if(qtyArrayElem>0)
    {
        error=0;

        for(i=0;i<qtyArrayElem;i++)
            acumIntNums+=intArray[i];

        acumIntNums/=qtyArrayElem;

        *promElem=acumIntNums;
    }

    return error;
}
