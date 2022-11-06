#include <stdio.h>
#include <stdlib.h>

/* 07
Crie um programa que contenha uma func ̧ao que permita passar por par  ̃ ametro dois ˆ
numeros inteiros A e B. A func ̧  ́ ao dever  ̃ a calcular a soma entre estes dois n  ́ umeros e  ́
armazenar o resultado na variavel A. Esta func ̧  ́ ao n  ̃ ao dever  ̃ a possuir retorno, mas dever  ́ a ́
modificar o valor do primeiro parametro. Imprima os valores de A e B na func ̧  ̃ ao principal.  ̃́
*/

void imprimirResultado(int *p_a, int *p_b);

int main()
{
    int a, b, *p_a, *p_b;
    p_a = &a; 
    p_b = &b;

    printf("Informe dois valores Inteiros: ");
    scanf("%d%d", &a, &b);
    imprimirResultado(p_a, p_b);

    printf("soma dos valores eh: %d",a);


   return 0;
}

void imprimirResultado(int *p_a, int *p_b){
    *p_a = *p_a + *p_b;
}
