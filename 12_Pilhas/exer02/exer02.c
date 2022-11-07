#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

typedef struct NO
{
    char plv;
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
void empilhar(PILHA *p, char crt){
    NO *novo = (NO*) malloc(sizeof(NO));
    if (novo == NULL)
    {
        printf("\nErro ao alocar memoria para um no.");
        exit(0);
    } else {
        novo->plv = crt;
        novo->prox = p->topo;
        p->topo = novo;
    }
}
char desmpilhar(PILHA *p){
    NO *apagar;
    char crt;
    if (pilhaVazia(p) == 1)
    {
        printf("Pilha vazia\n");
        return;
    }else{
        crt = p->topo->plv;
        apagar = p->topo;
        p->topo = p->topo->prox;
        free(apagar);
        return crt;
    }
}
void exibirPilha(PILHA *p){
    NO *novo = p->topo;
    if (pilhaVazia(p) == 1)
    {
        printf("Pilha vazia\n");
        return;
    }else{
        printf("\n-----------PILHA----------\n");
        while (novo != NULL)
        {
            printf("%c", novo->plv);
            novo = novo->prox;
        }
        printf("\n-----------FIM PILHA----------\n");
    }
}
void palavras(char plv_user[], char plv_desem[]){
    int retorno;
    retorno = strcmp(plv_user, plv_desem);
    if (retorno == 0) printf("\nA palavra eh palindromo\n");
    else printf("\nA palavra NAO eh palindromo\n");
}

void palimedro(PILHA *p){
    char palavra[30] = {'\0'};
    char plr_empilhar[30];
    int i = 0;
    


    printf("Informe um nome: ");
    scanf("%29[^\n]", plr_empilhar);

    while (plr_empilhar[i] != '\0')
    {
       empilhar(p, plr_empilhar[i]);
       i++;
    }
    i = 0;    
    // exibirPilha(p);
    
    while (pilhaVazia(p) == 0)
    {
            palavra[i] = desmpilhar(p);
            i++;
    }
    palavras(plr_empilhar, palavra);
}

void reinicializar(PILHA *p){
    NO *apagar;
    if (pilhaVazia(p) == 1)
    {
        printf("Pilha vazia\n");
        return;
    } else {

        while (p->topo != NULL)
        {   
           apagar = p->topo;
           p->topo = p->topo->prox;
           free(apagar);
        }
    }

}

int main()
{
    PILHA *p = (PILHA*) malloc(sizeof(PILHA));
    int op;
    printf("\n---------Descubra se o nome eh um palindromo----------\n");
    do
    {
        // Sleep(1000);
        // system("cls");
        palimedro(p);
        printf("\nDeseja continuar?\n1 - sim\n2 - nao\n");
        scanf("%d", &op);

        reinicializar(p);
        
    } while (op == 1);
   

    return 0;
}
