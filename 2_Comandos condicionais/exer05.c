#include <stdio.h>
#include <stdlib.h>

/* Q5 */

int main()
{
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d eh par", num);
    }else{
        printf("%d eh impar", num);
    }
    
    return 0;
}
