#include <stdio.h>
#include <stdlib.h>

/* Q6 */

int main()
{
    int num, num2, dife;


    printf("Informe um numero: ");
    scanf("%d", &num);
    printf("\nInforme outro numero: ");
    scanf("%d", &num2);

    if (num > num2)
    {
        dife = num - num2;
        printf("%d eh o maior numero, a diferenca dos dois numeros eh %d",num, dife);
    }else{
        dife = num2 - num;
        printf("%d eh o maior numero, a diferenca dos dois numeros eh %d",num2, dife);
    }

    return 0;
}
