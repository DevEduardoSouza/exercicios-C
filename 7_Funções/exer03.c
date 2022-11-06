#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int verificarNumero(int num);

int main()
{
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    printf("%d",verificarNumero(num));

    return 0;
}
int verificarNumero(int num){
    int res;
    if (num > 0)
    {
        res = 1;
    }else if (num < 0)
    {
        res = -1;
    }else{
        res = 0;
    }
    
    return res;
}
