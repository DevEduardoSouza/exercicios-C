#include <stdio.h>
#include <stdlib.h>

/* Q3 */

int main()
{

    int num1, num2, num3, soma;

    printf("informe 3 numeros inteiros: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    soma = num1 + num2 + num3;

    printf("\n%d + %d + %d = %d", num1, num2, num3, soma);
    
    return 0;
}
