#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void abrirArq(char nomeArq[]){
    FILE *file = fopen(nomeArq, "r");
    int contV = 0, contC = 0;
    char letra;
    if (file == NULL)
    {
        printf("Erro arquivo nao existente\n");
        exit(0);
    }else{
        while (!feof(file))
        {
           letra = fgetc(file);
           if (letra == 'a' || letra == 'A'
            || letra == 'e' || letra == 'E'
            || letra == 'i' || letra == 'I'
            || letra == 'o' || letra == 'O'
            || letra == 'u' || letra == 'u'
            )
           {
                contV++;
           }else{
                contC++;
           }
                
        }
    }

    printf("\nQuantidade de Vogais: %d", contV);
    printf("\nQuantidade de Consoantes: %d", contC);

    fclose(file);
}



int main()
{
    char nomeArq[30];
    printf("Informe o nome do arquivo com a extensao: ");
    scanf("%29[^\n]", nomeArq);
    abrirArq(nomeArq);
    
    return 0;
}
