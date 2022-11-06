#include <stdio.h>
#include <stdlib.h>

/*
Elaborar um programa que leia dois valores inteiros (A e B). Em seguida fac ̧a uma func ̧ao ̃
que retorne a soma do dobro dos dois numeros lidos. A func ̧  ́ ao dever  ̃ a armazenar o dobro  ́
de A na propria vari  ́ avel A e o dobro de B na pr  ́ opria vari  ́ avel B.  ́
*/

void dobro(int *p_a, int *p_b);

int main()
{
   
   int a = 5, b = 8, *p_a, *p_b;
   p_a = &a;
   p_b = &b;

  

   dobro(p_a, p_b);

   printf("O dobro de a%d\n", *p_a);
   printf("O dobro de b %d\n", *p_b);

   return 0;
}

void dobro(int *p_a, int *p_b){

    *p_a = *p_a * 2; 
    *p_b = *p_b * 2; 
}