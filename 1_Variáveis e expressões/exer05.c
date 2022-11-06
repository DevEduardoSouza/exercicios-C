#include <stdio.h>
#include <stdlib.h>

/* Q5 */

int main()
{

    float num, quinta;

    printf("Informe um numero real: ");
    scanf("%f", &num);

    quinta = num / 5.0;

    printf("\nA quinta parte de %.2f eh = %.2f", num, quinta);
    
    return 0;
}