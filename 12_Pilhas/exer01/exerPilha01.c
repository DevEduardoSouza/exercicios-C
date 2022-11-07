#include <stdio.h>
#include <stdlib.h>


typedef struct NO
{
    char *plv;
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
void empilhar(PILHA *p, char *plv){
    NO *novo = (NO*) malloc(sizeof(NO));
    int i = 0;
    if (novo == NULL)
    {
        printf("Erro ao alocar mamoria para no.\n");
        exit(0);
    }else{
        
       while ( (*plv + i) != '.')
       {
            novo->plv = plv;
            novo->prox = p->topo;
            p->topo = novo;
            i++;
       }
    }
}
void exibirPilha(PILHA *p){
    NO *novo = p->topo;
    if (pilhaVazia(p) == 1)
    {
        printf("\nPilha vazia.");
        return;
    }else{
        printf("\n-----------PILHA-------------\n");
        while (novo != NULL)
        {
            printf("%c ", novo->plv);
            novo = novo->prox;
        }
        printf("\n----------- FIM PILHA-------------\n");
    }
}



char ler_palavra(char *plv){
    printf("Informe uma palvara: ");
    scanf("%29[^\n]", plv);
}

int main()
{
    char *plv[30];
    ler_palavra(plv);


    PILHA *p = (PILHA*) malloc(sizeof(PILHA));

    inicializarPilha(p);

    empilhar(p, plv);
    // empilhar(p, 'i');
    // empilhar(p, ' ');
    // empilhar(p, 'o');
    // empilhar(p, 'k');
    // empilhar(p, 'a');
    // empilhar(p, 'y');
    // empilhar(p, ' ');
    exibirPilha(p);

    // printf("\n%s", plv);

    return 0;
}
