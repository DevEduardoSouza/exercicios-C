#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
  char fun;
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

void push(PILHA *p, char equ){
  NO *novo = (NO*) malloc(sizeof(NO));
  if(novo == NULL){
      printf("\nPilha vazia.");
    return;
  } else {
    novo->fun = equ;
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
      aux = p->topo->fun;
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
      printf("%c ", novo->fun);
      novo = novo->prox;
    }
    printf("\n");
  }
}
int verificarEquacao(PILHA *p){
  NO *novo2, *novo = p->topo;
  char aux;
  int controle = 0, contA = 0, contF = 0;
  if (pilhaVazia(p))
  {
    printf("\nPilha Vazia.");
    return;
  } else {
    while (novo != NULL)
    {
      
       if (novo->fun == '(')
       {
          controle = 0;
          novo2 = novo->prox;
          // Verificar se ha um abre parenteses
          while (novo2 != NULL)
          {
             if (novo2->fun == ')')
                controle = 1;
             
            novo2 = novo2->prox;
          }
       }
       novo = novo->prox;
    }
  }

  return controle;
}

char lerNum(){
    char num;
    printf("\nInforme um num: ");
    scanf("%c", &num);
    getchar();
    return num;
}


int main(void) {
  PILHA *p = (PILHA*) malloc(sizeof(PILHA));
  int aux, op;
  inicializarPilha(p);



  do{
    printf("\n0 - sair\n1 - push\n2 - verificar equacao\n3 - exibri\n4 - reinicializarP\n");
    scanf("%d", &op);
    getchar();
    switch(op){
      case 1:  push(p, lerNum());
        break;
      case 2:  if (verificarEquacao(p))
                {
                  printf("\nEquacao correta.");
                }else{
                  printf("\nEquacao incorreta.");
                }
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