#include <stdio.h>
#include <stdlib.h>

/* Q7 */

int main()
{

    float c, f;

    printf("Informe uma temperatura em grau fahrenheit: ");
    scanf("%f", &f);

    c = 5.0 * (f - 32.0) / 9.0;

    printf("%.2f em graus fahrenheit eh: %.2f graus celsius",f,c);

    return 0;
}