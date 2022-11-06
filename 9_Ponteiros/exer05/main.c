#include <stdio.h>
#include <stdlib.h>

/*
Fac ̧a um programa que leia dois valores inteiros e chame uma func ̧ao que receba estes  ̃
2 valores de entrada e retorne o maior valor na primeira variavel e o menor valor na  ́
segunda variavel. Escreva o conte  ́ udo das 2 vari  ́ aveis na tela.  ́
*/

int maiorValor(int *p_num1, int *p_num2);

int main()
{
    int num1, num2, *p_num1, *p_num2;
    p_num1 = &num1;
    p_num2 = &num2;

  
    printf("O maior valor eh: %d", maiorValor(p_num1, p_num2) );

  
    return 0;
}

int maiorValor(int *p_num1, int *p_num2){


    int maiorValor;
    printf("Informe um valor: ");
    scanf("%d", &*p_num1);
    printf("Informe um valor: ");
    scanf("%d", &*p_num2);

    if (*p_num1 > *p_num2)
    {
        maiorValor = *p_num1;
    }else{
        maiorValor = *p_num2;
    }
    
    return maiorValor;
}