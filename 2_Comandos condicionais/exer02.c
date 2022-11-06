#include <stdio.h>
#include <stdlib.h>

/* Q2 */

int main()
{

    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    
    if (num > 0)
    {
        for (int i = 0; i < num; i++)
        {
                if (i * i == num)
                {
                    printf("A raiz quadrada de %d eh %d", num, i);
                }
        }

    }else{
        printf("Opcao invalida!!");
    }
    
    return 0;
}