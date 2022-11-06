#include <stdio.h>
#include <stdlib.h>

/* 12

Fac¸a um programa que leia tres valores inteiros e chame uma func¸ ˆ ao que receba estes 3 ˜
valores de entrada e retorne eles ordenados, ou seja, o menor valor na primeira variavel, ´
o segundo menor valor na variavel do meio, e o maior valor na ´ ultima vari ´ avel. A func¸ ´ ao˜
deve retornar o valor 1 se os tres valores forem iguais e 0 se existirem valores diferentes. ˆ
Exibir os valores ordenados na tela.


*/

void lerValores(int *num);


int main()
{
    int num[3], *p_num;
    p_num = &num;
    lerValores(p_num);

   return 0;
}

void lerValores(int *num){
    int aux;

    for (int i = 0; i < 3; i++)
    {
        printf("Informe 3 valores: ");
        scanf("%d", &num[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (num[i] < num[j])
            {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d, ", num[i]);
    }

}


