#include <stdio.h>
#include <stdlib.h>

/* Q3 */

int main()
{
   
   float num[10], qdoNum[10];

  printf("Informe 10 numeros\n");
   for (int i = 0; i < 10; i++)
   {
      scanf("%f", &num[i]);
   }

   for (int i = 0; i < 10; i++)
   {
      qdoNum[i] = num[i] * num[i];
   }
   printf("\n--Numeros e os quadrados de cada---\n");
   for (int i = 0; i < 10; i++)
   {
      printf("%.2f -> %.2f\n", num[i], qdoNum[i]);
   }
    return 0;
}