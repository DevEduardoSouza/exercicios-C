#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dobro(int num){
    return num * 2;
}

int main()
{
    int num;

    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    printf("\nO dobro de %d eh %d", num, dobro(num));

    return 0;
}
