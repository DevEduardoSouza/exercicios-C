#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Fac¸a um programa que leia do usuario o tamanho de um vetor a ser lido e fac¸a a alocac¸ ´ ao˜
// dinamica de mem ˆ oria. Em seguida, leia do usu ´ ario seus valores e mostre quantos dos ´
// numeros s ´ ao pares e quantos s ˜ ao˜ ´ımpares.

void verificarNumero(int *vet, int tam);


int main()
{
    int *vet, tam;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = malloc(tam * sizeof(int));

    printf("\nInforme %d numeros inteiros\n", tam);

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &*(vet + i));
    }
    verificarNumero(vet, tam);
    
    return 0;
}

void verificarNumero(int *vet, int tam){

    int qtdPar = 0, qtdImpar = 0;

    for (int i = 0; i < tam; i++)
    {
        if (*(vet + i) % 2 == 0)
        {
            qtdPar++;
        }else{
            qtdImpar++;
        }
    }

    printf("\nQuantidade de numeros pares: %d\n", qtdPar);
    printf("Quantidade de numeros impares: %d\n", qtdImpar);

    free(vet);
}
