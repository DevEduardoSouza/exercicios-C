#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// . Fac¸a um programa que leia um numero N e: ´
// • Crie dinamicamente e leia um vetor de inteiro de N posic¸oes; ˜
// • Leia um numero inteiro X e conte e mostre os m ´ ultiplos desse n ´ umero que existem ´
// no veto

int main(int argc, char const *argv[])
{

    int *vet, n, x, cont = 0;

    printf("Informe quantos numero ira ter o vetor: ");
    scanf("%d", &n);

    vet = malloc(n * sizeof(int));

    printf("\nInforme %d numeros: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("Informe o valor, em seguida vou te mostra os multiplos do proprio no vetor: ");
    scanf("%d", &x);

    for (int i = 0; i < n; i++)
    {
        if (vet[i] % x  == 0)
        {
            printf("%d ", vet[i]);
        }else{
            cont++;
        }
    }
     if (cont == n)
    {
         printf("\n%d, nao tem multiplos no vetor", x);
    }
    
    free(vet);

    return 0;
}
