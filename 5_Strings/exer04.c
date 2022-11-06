#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char nome[30];

    printf("Informe seu nome: ");
    scanf("%29[^\n]", nome);

    printf("\nPrimeiras letra do seu nome: ");
    for (int i = 0; i < 4; i++)
        printf("%c", nome[i]);
    
    return 0;
}
