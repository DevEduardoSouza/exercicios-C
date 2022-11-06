#include <stdio.h>
#include <stdlib.h>
#define MAX 8

void pedirNUm(int num[]);
int numPares(int num[]);

int main()
{
    int num[MAX], qtdPar;

    pedirNUm(num);
    qtdPar = numPares(num);
    printf("Total de numeros pares: %d", qtdPar);

    return 0;
}
void pedirNUm(int num[]){

    printf("Informe 8 numeros\n");
    for (int i = 0; i < MAX; i++)
        scanf("%d", &num[i]);  
}
int numPares(int num[]){
    int qtd = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (num[i] % 2 == 0)
            qtd++;
    }
    return qtd;
}

