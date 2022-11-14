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

