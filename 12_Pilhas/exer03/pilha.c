#include "pilha.h"

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
        while (!novo)
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

