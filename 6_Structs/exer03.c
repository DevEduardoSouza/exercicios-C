#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 5

// Construa uma estrutura aluno com nome, numero de matr ´ ´ıcula e curso. Leia do usuario ´
// a informac¸ao de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na ˜
// tela.

typedef struct
{
    char nome[30];
    char numMat[30];
    char curso[30];
}ALUNO;

void cadastra_aluno(ALUNO *p,  int *ptr_count);
void imprimir_aluno(ALUNO *p,  int *ptr_count);

int main()
{
    ALUNO *p[MAX];

    int op, count = 0, *ptr_count;
    ptr_count = &count;
    
     printf("\n\n%d\n\n",count);

    do
    {
        printf("\n0 - sair\n1 - Inserir alunos\n2 - Mostra alunos\n");
        scanf("%d", &op);
        getchar();
        switch (op)
        {
        case 1: cadastra_aluno(p, ptr_count);
            break;
        case 2: imprimir_aluno(p, ptr_count);
            break;
            
        default:
            if (op != 0)
                printf("Erro opcao invalida\n");
            break;
        }
        
    } while (op != 0);
    
    return 0;
}

void cadastra_aluno(ALUNO *p, int *ptr_count){
    for (int i = 0; i < MAX; i++)
    {
        printf("Informe o nome do aluno: ");
        scanf("%29[^\n]", p[i].nome);
        getchar();
        printf("Informe o numero da matricula: ");
        scanf("%29[^\n]", p[i].numMat);
        getchar();
        printf("Informe o nome do curso: ");
        scanf("%29[^\n]", p[i].curso);
        getchar();
        (*ptr_count)++;
    }
}

void imprimir_aluno(ALUNO *p,  int *ptr_count){
        if (*ptr_count == 0)
        {
           printf("\n***Lista vazia***\n");
           return;
        }

        for (int i = 0; i < MAX; i++)
        {
            printf("\n--------------------\n");
            printf("\nNome: %s\nNumero da matricula: %s\nCurso: %s\n",p[i].nome, p[i].numMat, p[i].curso);
            printf("\n--------------------\n");
        }
}