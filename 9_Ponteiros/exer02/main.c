#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que contenha duas variaveis inteiras. Compare seus enderec ̧os e  ́
    exiba o maior enderec ̧o.
*/

int main()
{
    int num1 = 0, num2 = 5, *p_num1, *p_num2;
    p_num1 = &num1;
    p_num2 = &num2;

    printf("Endereco de num1 %p\n", p_num1);
    printf("Endereco de num2 %p\n", p_num2);

    if (p_num1 > p_num2)
    {
        printf("Num1 tem o maior endereco\n");
    }else
    {
        printf("Num2 tem o maior endereco\n");
    }
    
    return 0;
}