#include <stdio.h>
#include <stdlib.h>

/* Q4 */

int main()
{

    int num, quadrado;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    
    if (num > 0)
    {
        for (int i = 0; i < num; i++)
        {
                if (i * i == num)
                {
                    printf("\nA raiz quadrada de %d eh %d\n", num, i);
                }
        }

        quadrado = num * num;
        printf("o quadrado de %d eh %d", num, quadrado);

    }else{
        printf("Numero invalido");
    }
    
    return 0;
}