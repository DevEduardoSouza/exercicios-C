#include <stdio.h>
#include <stdlib.h>

typedef struct NO
{
   int num;
   struct NO *prox;
}NO;

typedef struct FILA
{
    NO *ini;
    NO *fim;
}FILA;

void inicializarFila(FILA *f){
    f->ini = NULL;
    f->fim = NULL;
}

void enfileirar(FILA *f, int num){
    NO *novo = (NO*) malloc(sizeof(NO));
    if (novo == NULL)
    {
        printf("Erroa ao alocar um no.\n");
        return;
    } else {
        novo->num = num;   
        novo->prox = NULL;
        if (f->ini == NULL){
            f->fim = novo;
            f->ini = novo;
        }
        f->fim->prox = novo;
        f->fim = novo;
    }
}

int desenfileirar(FILA *f){
    NO *apagar;
    int aux;

    if (f->ini == NULL)
    {
        printf("\nFila vazia.");
        return;
    } else {
        aux = f->ini->num;
        apagar = f->ini;
        f->ini = f->ini->prox;

        if (f->ini == NULL)
            f->fim = NULL;

        free(apagar);
        return aux;
    }
}

void exibirFila(FILA *f){
    NO *novo = f->ini;
    if (novo ==  NULL)
    {
       printf("\nFila vazia.");
       return;
    } else {
        printf("\n--------FILA---------\n");
        while (novo != NULL)
        {
            printf("%d ", novo->num);
            novo = novo->prox;
        }
        printf("\n--------FIM FILA---------\n");
    }
}

void enfileirar_com_prioridade(FILA *f, int num){
    NO *aux, *novo = (NO*) malloc(sizeof(NO));
    if (novo == NULL)
    {
        printf("Erroa ao alocar um no.\n");
        return;
    } else {
        novo->num = num;   
        novo->prox = NULL;
        if (f->ini == NULL){
            f->fim = novo;
            f->ini = novo;
        }
        //O elemento que eu recebir é um prioridade??
        if (num > 59)
        {
            // é a primeira prioridade?
            if (f->ini->num < 60)
            {
                novo->prox = f->ini;
                f->ini = novo;
            } else { // no meio
                aux = f->ini;
                while (aux->prox->num > 59 && aux->prox)
                    aux = aux->prox;
                
                novo->prox = aux->prox;
                aux->prox = novo;
            }
            
        } else {  //Se não é prioridade add no fim
            f->fim->prox = novo;
            f->fim = novo; 
        }
    }

}
    


// Implemente a função reverso, que reposiciona os elementos na fila de tal forma que o
// início da fila torna-se o fim, e vice-versa

// Considere uma lista contendo números inteiros. Escreva uma função para ordenar essa
// fila em ordem crescente de seus valores.

int lerNum(){
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);
    return num;
}
int main()
{
    FILA *f = (FILA*) malloc(sizeof(FILA));
    inicializarFila(f);
    int aux, op;

    do
    {
        printf("\n0 - sair\n1 - Enfileirar\n2 - Desenfileirar\n3 - exibir\n4 - enf P\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1: enfileirar(f, lerNum());
            break;
        case 2: desenfileirar(f);
            break;
        case 3: exibirFila(f);
            break;
        case 4: enfileirar_com_prioridade(f, lerNum());
            break;           
        
        default: if(op != 0) printf("\nOpcao invalida.");
            break;
        }
    } while (op != 0);
    

    return 0;
}
