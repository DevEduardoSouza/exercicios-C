#include <stdio.h>
#include <stdlib.h>

/* Q4 */

int main()
{

    float num, quadrado;

    printf("Informe um numero real: ");
    scanf("%f", &num);

    quadrado = num * num;

    printf("\nO quadrado de %.2f eh = %.2f", num, quadrado);
    
    return 0;
}