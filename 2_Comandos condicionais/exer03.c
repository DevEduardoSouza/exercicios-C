#include <stdio.h>
#include <stdlib.h>

/* Q3 */

int main()
{

    float num, quadrado;

    printf("Informe um numero inteiro: ");
    scanf("%f", &num);
    
    if (num > 0)
    {
        for (int i = 0; i < num; i++)
        {
                if (i * i == num)
                {
                    printf("A raiz quadrada de %.2f eh %.2f", num, i);
                }
        }

    }else{
        quadrado = num * num;
        printf("o quadrado de %.2f eh %.2f", num, quadrado);
    }
    
    return 0;
}