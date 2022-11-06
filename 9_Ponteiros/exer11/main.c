#include <stdio.h>
#include <stdlib.h>

/* 10

Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array
do teclado e imprima o enderec ̧o das posic ̧oes contendo valores pares.  ̃

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
        if (*(p_vet + i) % 2 == 0)
             printf("%p\n", &p_vet);
        
    }
}

