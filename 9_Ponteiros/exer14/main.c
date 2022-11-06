#include <stdio.h>
#include <stdlib.h>

/* 14

Elabore uma func¸ao que receba duas strings como par ˜ ametros e verifique se a segunda ˆ
string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres ´
das strings.

*/



int main()
{
    char str1[29], str2[29];

    ler_nome(str1,str2);
    verificar_ocorrencia(str1,str2);

 

   return 0;
}



