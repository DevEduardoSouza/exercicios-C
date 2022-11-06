#include <stdio.h>
#include <stdlib.h>
#define MAX 8


void preenchervetor(int vet[]);
void somaVet(int vet[]);
int verificar(int num1, int num2);

int main()
{
    int *vet[MAX];
    preenchervetor(vet);
    somaVet(vet);
   
    return 0;
}

void preenchervetor(int vet[]){
    printf("Informe 8 numeros\n");

    for (int i = 0; i < MAX; i++)
        scanf("%d", &vet[i]);
}
void somaVet(int vet[]){
    int num1, num2, resul;

    printf("informe duas posicoes do vetor para somar\n");
    scanf("%d%d", &num1, &num2);
    if (verificar(num1, num2))
    {
        resul = vet[num1] + vet[num2];  
        printf("\nResultado eh: %d", resul);  
    }else
        printf("Erro, posicao invalida\n");
    
}
int verificar(int num1, int num2){
    
    if ((num1 >= 0 && num1 < 8) && (num2 >= 0 && num2 < 8))
        return 1;
    else
        return 0;
}
