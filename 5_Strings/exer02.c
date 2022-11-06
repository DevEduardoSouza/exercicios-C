#include <stdio.h>
#include <stdlib.h>

int tamanho_string(char str[]){
    int qtd = 0;
    for (int i = 0; i < 30; i++)
    {
        if (str[i] == '\0')
            break;
        else
            qtd++;
    }
    return qtd;
}

int main()
{
    char str[30];

    printf("Informe um palvra: ");
    scanf("%29[^\n]", str);
    printf("Total de letra e: %d", tamanho_string(str));
    return 0;
}
