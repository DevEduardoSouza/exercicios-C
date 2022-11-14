// #include "pilha.h"
// #include "pilha.c"

#include <stdio.h>
#include <stdlib.h>


typedef struct NO
{
    int num;
    struct NO *prox;
}NO;

typedef struct PILHA
{
    NO *topo;
}PILHA;



void inicializarPilha(PILHA *p){
    p->topo = NULL;
}
int pilhaVazia(PILHA *p){
    if (p->topo == NULL) return 1;
    else return 0;
}
void push(PILHA *p, int num){
    NO *novo = (NO*)malloc(sizeof(NO));
    if (!novo)
    {
        printf("\nErro ao alocar um no.");
        return;
    } else {
        novo->num = num;
        novo->prox = p->topo;
        p->topo = novo;
    }
}
int pop(PILHA *p){
    NO *apagar;
    int aux;
    if (pilhaVazia(p))
    {
        printf("\nPilha Vazia.");
        return -1;
    } else {
        aux = p->topo->num;
        apagar = p->topo;
        p->topo = p->topo->prox;
        free(apagar);
        return aux;
    }
    
}
void exibir(PILHA *p){
    NO *novo = p->topo;
    if (pilhaVazia(p))
    {
        printf("\nPilha Vazia.");
        return;
    } else {
        printf("\n----------PILHA----------\n");
        while (novo != NULL)
        {
            printf("%d\n", novo->num);
            novo = novo->prox;
        }
        printf("----------FIM PILHA----------\n");
    }
}

int lerNUm(){
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    return num;
}

// Retornar A quantidade de elementos impares de pilha
int qtdImpar(PILHA *p){
    int qtd = 0;
    if (pilhaVazia(p))
    {
        printf("\nPilha Vazia.");
        return -1;
    } else {
        while(pilhaVazia(p) == 0){
            if (pop(p) % 2 != 0)
                qtd++;
        }
        return qtd;
    }
}





int main()
{
    PILHA *p = (PILHA*) malloc(sizeof(PILHA));
    int aux, op;
    inicializarPilha(p);

    do
    {
        printf("\n0 - sair\n1 - empilhar\n2 - desempilhar\n3 - exibir\n4 - quantidade de num impar\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1: push(p , lerNUm());
            break;
        case 2: aux = pop(p); 
                if(aux != -1) printf("\nNum Removido: %d", aux);
            break;
        case 3: exibir(p);
            break;
        case 4: aux = qtdImpar(p);
                if(aux != -1) printf("\nQtd de impares: %d", aux);
             break;                                 
        
        default: if(op != 0) printf("\nOpcoa invalida.");
            break;
        }
    } while (op != 0);
    






    return 0;
}
