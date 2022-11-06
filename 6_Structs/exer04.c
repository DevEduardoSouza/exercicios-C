#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 2


// Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve
// conter a matr´ıcula do aluno, nome, nota da primeira prova, nota da segunda prova e nota
// da terceira prova.
// (a) Permita ao usuario entrar com os dados de 5 alunos. ´
// (b) Encontre o aluno com maior nota da primeira prova.
// (c) Encontre o aluno com maior media geral. ´
// (d) Encontre o aluno com menor media geral ´
// (e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para
// aprovac¸ao. 

typedef struct
{
    char nome[30], matricula[30];
    float nota[3];
    float media;
}ALUNO;

void cadastrar_aluno(ALUNO *a);
void maior_nota_primeiraProva(ALUNO *a);
void maior_media(ALUNO *a);
void menor_media(ALUNO *a);
void resultado(ALUNO *a);

int main()
{
    ALUNO *a[MAX];
    int op;

    do
    {
        printf("\n0 - Sair\n1 - Cadastra alunos\n2 - Aluno com maior nota na primeira prova\n3 - Aluno com a maior media geral\n4 - Aluno com a menor media geral\n5 - Alunos APROVADO e REPROVADO\n");
        scanf("%d", &op);
        getchar();

        switch (op)
        {
        case 1: cadastrar_aluno(a);
            break;
        case 2: maior_nota_primeiraProva(a);
            break;
        case 3: maior_media(a);
            break;
        case 4: menor_media(a);
            break;
        case 5: resultado(a);
            break;
        case 6:
            break;
        default:
            if (op != 0)
                printf("Opcao invlida\n");
            break;
        }
    } while (op != 0);
    
    return 0;
}


void cadastrar_aluno(ALUNO *a){
    printf("\n\n\t-------CADASTRA ALUNO-------\n\n");

    for (int i = 0; i < MAX; i++)
    {
        printf("Nome do aluno: ");
        scanf("%29[^\n]", a[i].nome);
        getchar();
        printf("Numero da matricula: ");
        scanf("%29[^\n]", a[i].matricula);
        getchar();
        for (int j = 0; j < 3; j++)
        {
            printf("Informe a nota %d: ", j+1);
            scanf("%f", &a[i].nota[j]); 
            getchar();
        }
        printf("\n-----------------\n");
    }
}

void maior_nota_primeiraProva(ALUNO *a){

    float maiorNota = 0;
    int copy_i;
    for (int i = 0; i < MAX; i++)
    {
        if (a[i].nota[0] > maiorNota){
            maiorNota = a[i].nota[0];
            copy_i = i;
        }            
    }
    printf("\n-----------------\n");
    printf("\n%s teve a maior nota com %.2f\n", a[copy_i].nome, maiorNota);
    printf("\n-----------------\n");
}

void maior_media(ALUNO *a){
    for (int i = 0; i < MAX; i++)
    {
        a[i].media = 0;
       for (int j = 0; j < 3; j++)
        {
           a[i].media =  a[i].media + a[i].nota[j];
        }
         a[i].media =  a[i].media / 3.0;
    }
    
    float maiorMedia = 0;
    int copy_i;

    for (int i = 0; i < MAX; i++)
    {
        if (a[i].media > maiorMedia)
        {
            maiorMedia = a[i].media;
            copy_i = i;
        }
    }
    printf("\n-----------------\n");
    printf("\n%s teve a maior media com %.2f\n", a[copy_i].nome, maiorMedia);
    printf("\n-----------------\n");
}

void menor_media(ALUNO *a){
    float menorMedia = 0;
    int copy_i;

    for (int i = 0; i < MAX; i++)
    {
        if (i == 0)
            menorMedia = a[i].media;
        
        if (a[i].media < menorMedia)
        {
            menorMedia = a[i].media;
            copy_i = i;
        }
    }

    printf("\n-----------------\n");
    printf("\n%s teve a menor media com %.2f\n", a[copy_i].nome, menorMedia);
    printf("\n-----------------\n");
}

void resultado(ALUNO *a){
    printf("\n\n\t---------RESULTADO---------\n\n");

    for (int i = 0; i < MAX; i++)
    {
        if (a[i].media > 6)
           printf("%s\tAPROVADO\n", a[i].nome);
        else
           printf("%s\tREPROVADO\n", a[i].nome); 
    }

    printf("\n--------------------------------\n");
}
