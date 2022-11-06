#include <stdio.h>
#include <stdlib.h>

/* 09
Crie um programa que contenha uma matriz de float contendo 3 linhas e 3 colunas.
Imprima o enderec ̧o de cada posic ̧ao dessa matriz.  ̃
*/


void ImprimirENdereco(float *mat[3][3]);

int main()
{
    float **mat[3][3];
    ImprimirENdereco(mat);
   return 0;
}

void ImprimirENdereco(float *mat[3][3]){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
                printf("%p\n", &*(*(mat + i) + j));
        }
    }
}