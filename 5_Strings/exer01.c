#include <stdio.h>
#include <stdlib.h>

/* Q1 */

int main()
{
   char nome[30];

   printf("Informe seu nome: ");
   scanf("%[^\n]s", nome);

   printf("Seja bem vindo, %s.", nome);
   
    return 0;
}