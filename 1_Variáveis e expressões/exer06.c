#include <stdio.h>
#include <stdlib.h>

/* Q6 */

int main()
{

    float c, f;

    printf("Informe uma temperatura em grau celsius: ");
    scanf("%f", &c);

    f = c * (9.0/5.0) + 32;

    printf("%.2f em graus Celsius eh: %.2f em fahrenhite",c,f);

    return 0;
}