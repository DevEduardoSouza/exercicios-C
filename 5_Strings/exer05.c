#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

int contarLetras(char nome[]){
    int cont = 0;
    for (int i = 0; i < 30; i++)
    {
        if (nome[i] != '\0')
          cont++;  
        else
            break;
    }

    return cont;
}

int main()
{
    char nome[MAX];
    int qtd;

    printf("Informe seu nome: ");
    scanf("%29[^\n]",nome);

    qtd = contarLetras(nome);
    printf("\n%s possui %d letras", nome, qtd);
    
    return 0;
}
