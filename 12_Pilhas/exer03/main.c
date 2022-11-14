#include <stdio.h>
#include <stdlib.h>


// 23. Fac¸a uma func¸ao para retornar o n ˜ umero de elementos da pilha que possuem valor ´
// ´ımpar
// 24. Fac¸a uma func¸ao para retornar o n ˜ umero de elementos da pilha que possuem valor par
// 25. Fac¸a uma func¸ao que receba uma pilha como argumento e retorne o valor armazenado ˜
// em seu topo. A func¸ao deve remover tamb ˜ em esse elemento. 


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

    NO *novo = p->topo;
    if (novo == NULL)
    {
        printf("\nPilha Vazia.");
        return -1;
    } else {
        while(novo != NULL){
            if (novo->num % 2 != 0)
                qtd++;
            novo = novo->prox;
        }
        return qtd;
    }
}

// Retornar A quantidade de elementos pares de pilha
int qtdPar(PILHA *p){
    int qtd = 0;

    NO *novo = p->topo;
    if (novo == NULL)
    {
        printf("\nPilha Vazia.");
        return -1;
    } else {
        while(novo != NULL){
            if (novo->num % 2 == 0)
                qtd++;
            novo = novo->prox;
        }
        return qtd;
    }
}

// Retornar o elemento do topo da pilha
int topoPilha(PILHA *p){
  if(pilhaVazia(p) == 0){
    NO *novo = p->topo;
    return novo->num;
  } else {
    printf("\nPilha vazia.");
  }
}


int main()
{
    PILHA *p = (PILHA*) malloc(sizeof(PILHA));
    int aux, op;
    inicializarPilha(p);

    do
    {
        printf("\n0 - sair\n1 - empilhar\n2 - desempilhar\n3 - exibir\n4 - quantidade de num impar\n5 - quantidade de num par\n6 - Topo da pilha\n");
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
        case 5: aux = qtdPar(p);
                if(aux != -1) printf("\nQtd de pares: %d", aux);
             break; 
        case 6: aux = topoPilha(p);
                printf("\nTopo da Pilha: %d", aux);
          break;
        
        default: if(op != 0) printf("\nOpcoa invalida.");
            break;
        }
    } while (op != 0);
    

    return 0;
}