#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Empiilhar produtos com os seus nomes , valores e preços e fazer uma consulta e poder remover de qualquer posição usanddo ED pilha

typedef struct PRODUTOS
{
    char nome[30];
    int quantidade;
    float valor;
}PRODUTOS;

typedef struct NO
{
    PRODUTOS p;
    struct NO *prox;
}NO;

typedef struct PILHA
{
    NO *topo;
}PILHA;


PRODUTOS inserirProdutos(){
    PRODUTOS p;
    printf("\n-----------INSERIR PRODUTOS---------\n");

    printf("\nNome do produto: ");
    scanf("%29[^\n]", p.nome);
    getchar();
    printf("Quantidade: ");
    scanf("%d", &p.quantidade);
    printf("Valor: ");
    scanf("%f", &p.valor);
    getchar();
    return p;
}

void imprimirProduto(PRODUTOS p){
    printf("\nProduto: %s", p.nome);
    printf("\nQuantidade: %d", p.quantidade);
    printf("\nValor: %.2f", p.valor);
}

void inicializarPilha(PILHA *p){
    p->topo = NULL;  
}

void reinicializarPilha(PILHA *p){
    NO *apagar;
    if (pilhaVazia(p))
    {
        printf("\nPilha Vazia.");
    } else {
        while(p->topo != NULL){
            apagar = p->topo;
            p->topo = p->topo->prox;
            free(apagar);
        }
    }
}

int pilhaVazia(PILHA *p){
  if(p->topo == NULL) return 1;
  else return 0;
}

void push(PILHA *p, PRODUTOS pd){
  NO *novo = (NO*) malloc(sizeof(NO));
  if(novo == NULL){
      printf("\nPilha vazia.");
    return;
  } else {
    novo->p = pd;
    novo->prox = p->topo;
    p->topo = novo;
  }
}

PRODUTOS pop(PILHA *p){
    NO *apagar;
    PRODUTOS aux;
    if(pilhaVazia(p)){
      printf("\nPilha vazia.");
      return;
    } else {
      aux = p->topo->p;
      apagar = p->topo;
      p->topo = p->topo->prox;
      free(apagar);
      return aux;
    }
}


void exibir(PILHA *p){
  NO *novo = p->topo;
  if(pilhaVazia(p)){
      printf("\nPilha vazia.");
      return;
  } else {
   
    printf("\n--------TODOS OS PRODUTOS EMPILHADOS----------\n");
    while(novo != NULL){
      imprimirProduto(novo->p);
      printf("\n");
      novo = novo->prox;
    }
    printf("\n---------------FIM PRODUTOS-------------\n");
  }
}

void remover_produto(PILHA *p, char nomeP[]){
    PILHA *p2 = (PILHA*) malloc(sizeof(PILHA)); 
    PRODUTOS aux;
    inicializarPilha(p2);

    int control = 1, resul;
    if(pilhaVazia(p)){
      printf("\nPilha vazia.");
      return;
    } else {
        //Verificar se o nome existe
        while (p->topo != NULL)
        {
            resul = strcmp(p->topo->p.nome, nomeP);
           
            if (resul == 0){
                
                pop(p);
                break;
                 
            }else{
                aux = pop(p);
                push(p2, aux);
            }
        }
        while (pilhaVazia(p2) != 1)
        {
            aux = pop(p2);
            push(p ,aux);

        }
        
    }

}


int main(){ 

  PILHA *p = (PILHA*) malloc(sizeof(PILHA));
  PRODUTOS aux;
  int  op;
  char auxN[30];
  inicializarPilha(p);

  do{
    printf("\n0 - sair\n1 - Inserir Produto\n2 - Remover Produto\n3 - Exibri Produtos\n4 - Apagar Todos os produtos\n");
    scanf("%d", &op);
    getchar();
    switch(op){
      case 1:  push(p, inserirProdutos());
        break;
      case 2: // aux = pop(p); 
             // imprimirProduto(aux);
             exibir(p); 
             printf("Informe o nome do produto a ser removido: ");
             scanf("%29[^\n]", auxN);
             getchar();
             remover_produto(p, auxN);
        break;
      case 3: exibir(p); 
        break;
      case 4: reinicializarPilha(p);
        break;

      default: if (op != 0) printf("\nOpcao invalida.");
        break;
    }  
  }while(op != 0);
  
  return 0;
}
