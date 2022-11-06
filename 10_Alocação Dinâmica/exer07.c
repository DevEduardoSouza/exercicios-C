// Escreva um programa que leia primeiro os 6 numeros gerados pela loteria e depois os 6 ´
// numeros do seu bilhete. O programa ent ´ ao compara quantos n ˜ umeros o jogador acertou. ´
// Em seguida, ele aloca espac¸o para um vetor de tamanho igual a quantidade de numeros ´
// corretos e guarda os numeros corretos nesse vetor. Finalmente, o programa exibe os ´
// numeros sorteados e os seus n ´ umeros corretos

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAM 6


void informarNum(int *num[],int *numS[]);

int main()
{
    int op, *num[6], *numS[6] = {1, 2, 3, 4, 5, 6};


    do
    {
        printf("\n\n\t-----------BEM VINDO A LOTERIA-----------\n\n");
        printf("\n0 - sair\n1 - Informar os numeros\n");
        scanf("%d", &op);
        getchar();        
        switch (op)
        {
        case 1: informarNum(num, numS);
            break;
        default:
            break;
        }

    } while (op != 0);
    
    return 0;
}

void informarNum(int *num[], int *numS[]){
    printf("\nMAXIMO 6 numeros\n");
    printf("Informe numeros de 1 a 60\n");
    int qtd = 0, *numCertos;

    for (int i = 0; i < TAM; i++)
       scanf("%d", &num[i]);
    // for (int i = 0; i < TAM; i++)
    //    numS[i] = rand() % 60;
   
    for (int i = 0; i < TAM; i++)
       printf("%d-", numS[i]);
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (num[i] == numS[j]){
                qtd++;
            }  
        }
    }
    //falta
    numCertos = (int*) malloc(qtd * sizeof(int));
    printf("\n%d\n", qtd);
    printf("Numeros encontrados\n");

    for (int i = 0; i < qtd; i++)
    {
        printf("%d-", numCertos[i]);
    }
    
}
