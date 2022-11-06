#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int main()
{
    int num, soma = 0;
    printf("Informe 10 numeros\n");
    for (int i = 0; i < MAX; i++)
    {
        scanf("%d", &num);
        soma += num;
    }
    printf("\nSoma dos numeros digitados\nSoma = %d", soma);

    return 0;
}
