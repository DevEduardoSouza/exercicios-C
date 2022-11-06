#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
/*
Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ´ ao˜
dinamica de mem ˆ oria. Em seguida, leia do usu ´ ario seus valores e imprima o vetor lido.
*/

int main()
{
    int *vet, tam;


    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    vet = malloc(tam * sizeof(int));

    printf("\nInforme %d numeros: ", tam);
    for (int i = 0; i < tam; i++)
    {
    scanf("%d", &*(vet + i));
    }

    for (int i = 0; i < tam; i++)
    {
    printf("%d, ", *(vet + i));
    }

    free(vet);

    return 0;
}

