#include <stdio.h>
#include <stdlib.h>

/* Q2 */

int main()
{
   
   int vet[6];

   for (int i = 0; i < 6; i++)
   {
     printf("Informe um valor: ");
     scanf("%d", &vet[i]);
   }

    printf("\nValores Digitados: ");
   for (int i = 0; i < 6; i++)
   {
     printf("%d, ", vet[i]);
   }
   
    return 0;
}