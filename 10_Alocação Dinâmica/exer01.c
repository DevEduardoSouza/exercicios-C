#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int tam = 5;
 

/*
1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros, ´
(b) Pec¸a para o usuario digitar os 5 n ´ umeros no espac¸o alocado, ´
(c) Mostre na tela os 5 numeros, ´
(d) Libere a memoria alocada. 
*/


void lerArray(int *p_vet);
void mostraArray(int *p_vet);

int main()
{
    int vet, *p_vet;
    p_vet = &vet;
    p_vet = malloc(5 * sizeof(int));
    
    lerArray(p_vet);
    mostraArray(p_vet);
    free(p_vet);

    return 0;
}

void lerArray(int *p_vet){

    

    printf("Informe %d numeros: ", tam);

    for (int i = 0; i < tam; i++)
    {
        scanf("%d", &p_vet[i]);
    }
}

void mostraArray(int *p_vet){

    for (int i = 0; i < tam; i++)
    {
        printf("%d ", p_vet[i]);
    }
}
