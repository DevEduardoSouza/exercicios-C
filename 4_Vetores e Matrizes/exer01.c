#include <stdio.h>
#include <stdlib.h>

/* Q1 */

int main()
{
    int vet[6], soma;

    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &vet[i]);
    }
    soma = vet[0] + vet[1] + vet[5];

    printf("A soma de %d + %d + %d = %d\n", vet[0], vet[1], vet[5], soma);

    vet[4] = 100;

    for (int i = 0; i < 6; i++)
    {
        printf("%d -> %d\n", i, vet[i]);
    }
    
    return 0;
}