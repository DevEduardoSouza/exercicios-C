#include <stdio.h>
#include <stdlib.h>

/* 10

Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.

*/

void lerDados(int *p_vet);
void imprimirDados(int *p_vet);

int main()
{
    int *vet[5] , *p_vet;
    p_vet = &vet;

    lerDados(p_vet);
    imprimirDados(p_vet);

   return 0;
}

void lerDados(int *p_vet){

    for (int i = 0; i < 5; i++)
    {
        printf("Informe um valor inteiro: ");
        scanf("%d", &*(p_vet + i));
    }
}

void imprimirDados(int *p_vet){

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(p_vet + i));
    }
}

