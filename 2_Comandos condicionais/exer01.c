#include <stdio.h>
#include <stdlib.h>

/* Q1 */

int main()
{

    int num, num2;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);
    printf("Informe outro numero inteiro: ");
    scanf("%d", &num2);

    if (num > num2)
    {
       printf("\n%d eh maior que %d", num, num2);
    }else{
        printf("%d eh maior que %d", num2, num);
    }
    
    return 0;
}