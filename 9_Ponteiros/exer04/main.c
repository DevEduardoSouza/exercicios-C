#include <stdio.h>
#include <stdlib.h>

/*
    Fac ̧a um programa que leia 2 valores inteiros e chame uma func ̧ao que receba estas  ̃
    2 variaveis e troque o seu conte  ́ udo, ou seja, esta func ̧  ́ ao ̃ e chamada passando duas  ́
    variaveis A e B por exemplo e, ap  ́ os a execuc ̧  ́ ao da func ̧  ̃ ao, A conter  ̃ a o valor de B e B  ́
    tera o valor de A.  ́
*/


void trocarValores(int *p_a, int *p_b){
     int aux;

     aux = *p_a;
     *p_a = *p_b;
     *p_b = aux;

     printf("\n\nO valor de a: %d\n O valor de b: %d", *p_a, *p_b);
}

int main()
{
   int a, b, *p_a, *p_b;
   p_a = &a;
   p_b = &b;

   printf("Informe dois valores: ");
   scanf("%d%d", &a, &b);

   trocarValores(p_a, p_b);

    return 0;
}