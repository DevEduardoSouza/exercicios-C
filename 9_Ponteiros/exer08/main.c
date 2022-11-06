#include <stdio.h>
#include <stdlib.h>

/* 08
Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
enderec o de cada posic ̧ao desse array.
*/


void ImprimirENdereco(float *vet);

int main()
{
    float vet[10];
    ImprimirENdereco(vet);


   return 0;
}

void ImprimirENdereco(float *vet){

    for (int i = 0; i < 10; i++)
    {
        printf("\n%p", &*(vet + i));
    }
    
}