#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
  int num;
  struct NO *prox;
}NO;

typedef struct PILHA{
    NO *topo;
}PILHA;

void inicializarPilha(PILHA *p){
    p->topo = NULL;  
}

void reinicializarPilha(PILHA *p){
    NO *apagar;
    if (pilhaVazia(p))
    {
        
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

void push(PILHA *p, int num){
  NO *novo = (NO*) malloc(sizeof(NO));
  if(novo == NULL){
      printf("\nPilha vazia.");
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
    if(pilhaVazia(p)){
      printf("\nPilha vazia.");
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
  if(pilhaVazia(p)){
      printf("\nPilha vazia.");
  } else {
    printf("\n");
    while(novo != NULL){
      printf("%d ", novo->num);
      novo = novo->prox;
    }
    printf("\n");
  }
}

void dec_bin(PILHA *p, int num){
 
  while (num != 1){
    if(num % 2 == 0){
      push(p, 0);
    } else {
      push(p, 1);
    }
    num = num / 2;
  }
  if(num == 1) push(p, 1);
  
}
void dec_oct(PILHA *p, int num){
    while (num >= 8)
    {
        push(p, num % 8);
        num = num / 8;
    }
        push(p, num % 8);
}

int lerNum(){
    int num;
    printf("\nInforme um num: ");
    scanf("%d", &num);
    return num;
}


int main(void) {
  PILHA *p = (PILHA*) malloc(sizeof(PILHA));
  int aux, op;
  inicializarPilha(p);



  do{
    printf("\n0 - sair\n1 - Decimal -> Binario\n2 - Decimal -> octal\n3 - Decimal -> hexadecimal\n4 - exibri\n");
    scanf("%d", &op);
    switch(op){
      case 1: dec_bin(p, lerNum());
        break;
      case 2: dec_oct(p, lerNum());
        break;
      case 3:
        break;
      case 4: exibir(p); 
              reinicializarPilha(p);
        break;
      default: if (op != 0) printf("\nOpcao invalida.");
        break;
    }  
  }while(op != 0);
  
  return 0;
}