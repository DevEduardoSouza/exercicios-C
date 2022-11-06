#include <stdio.h>
#include <stdlib.h>

/*
    Escreva um programa que contenha duas variaveis inteiras. Leia essas vari  ́ aveis do  ́
teclado. Em seguida, compare seus enderec ̧os e exiba o conteudo do maior enderec ̧o.  ́
*/

int main()
{
    int num1, num2, *p_num1, *p_num2;
    p_num1 = &num1;
    p_num2 = &num2;

    printf("Informe dois numeros: ");
    scanf("%d%d", &num1, &num2);

    printf("\nconteudo p_num1: %p", p_num1);
    printf("\nconteudo p_num2: %p", p_num2);

    if (p_num1 > p_num2)
    {
        printf("\n o endereco de num1 eh maior que num2\n");
    }else{
        printf("\n o endereco de num2 eh maior que num1\n");
    }
    
    return 0;
}