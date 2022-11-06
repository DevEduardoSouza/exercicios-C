#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 4. Fac¸a um programa que receba do usuario o tamanho de uma string e chame uma ´
// func¸ao para alocar dinamicamente essa string. Em seguida, o usu ˜ ario dever ´ a informar o ´
// conteudo dessa string. O programa imprime a string sem suas vogais. 

void alocarMemoria(char *p_nome, int tam);
void mostrarSemVogais(char *p_nome, int tam);

int main()
{
    int tam;

    printf("Informe o tamanho de caracters para preeencher seu nome: ");
    scanf("%d", &tam);

    char nome[tam] , *p_nome;
    p_nome = &nome;

    alocarMemoria(p_nome, tam);

    printf("\nInforme o seu nome: ");
    scanf(" %[^\n]s", nome);

    mostrarSemVogais(p_nome, tam);
    
    free(nome);

    return 0;
}

void alocarMemoria(char *p_nome, int tam){

    p_nome = malloc(tam * sizeof(char));

    if (p_nome)
    {
        printf("\nMemoria alocada com sucesso!!");
    }else{
        printf("\nMemoria nao alocada");
    }
}


void mostrarSemVogais(char *p_nome, int tam){

     for (int i = 0; i < tam; i++)
     {
        if (p_nome[i] == 'a' || p_nome[i] == 'e' || p_nome[i] == 'i' || p_nome[i] == 'o' || p_nome[i] == 'u')
        {

        }else{
            printf("%c", p_nome[i] );
        }
    }
}