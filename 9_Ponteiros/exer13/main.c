#include <stdio.h>
#include <stdlib.h>

/* 13

Elabore uma func¸ao que receba duas strings como par ˜ ametros e verifique se a segunda ˆ
string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres ´
das strings.

*/

void ler_nome(char *str1, char *str2){
    
    printf("Informe um nome: ");
    scanf("%29[^\n]", str1);
    
    getchar();

    printf("Informe outro nome: ");
    scanf("%29[^\n]", str2);
}

void verificar_ocorrencia(char *str1, char *str2){

    int cont = 0;
    for (int i = 0; i < 29; i++)
    {
        for (int j = i; j < 29; j++)
        {
            if ((*str2 + j) == (*str1 + i))
            {
               cont++;
            }
            
        }
        
    }
    if(cont == 29){
        printf("\nA segunda string ocorre na primeira\n");
    }
}

int main()
{
    char str1[29], str2[29];

    ler_nome(str1,str2);
    verificar_ocorrencia(str1,str2);

 

   return 0;
}



