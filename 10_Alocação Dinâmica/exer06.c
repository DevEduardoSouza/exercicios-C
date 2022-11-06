#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Fac¸a um programa que simule a memoria de um computador: o usu ´ ario ir ´ a especificar o ´
// tamanho da memoria, ou seja, quantos bytes ser ´ ao alocados do tipo inteiro. Para tanto, ˜
// a memoria solicitada deve ser um valor m ´ ultiplo do tamanho do tipo inteiro. Em seguida, ´
// o usuario ter ´ a 2 opc¸ ´ oes: inserir um valor em uma determinada posic¸ ˜ ao ou consultar o ˜
// valor contido em uma determinada posic¸ao. A mem ˜ oria deve iniciar com todos os dados ´
// zerados.

int main()
{

    int tam, op, *vet;
    int posi, valor, cont = 0;

    do
    {
        printf("\n\nInforme tamanho da memoria, em bytes e tem que ser multiplo de %d: ", sizeof(int));
        scanf("%d", &tam);
        if (tam % sizeof(int) != 0)
        {
            printf("\n%d nao eh multiplo de %d",tam, sizeof(int));
        }
    }while (tam % sizeof(int) != 0);


    vet = calloc(tam / sizeof(int), sizeof(int));
    
    do
    {
        printf("\nEscolha\n1 - Inserir um valor\n2 - Consultar um valor\n3 - mostra todos os valores\n4 - sair\n");
        scanf("%d", &op);

        switch (op)
        {
        case 1:
            cont =0;
            printf("Informe uma posicao para inserir um valor: ");
            scanf("%d", &posi);
            printf("Informe o valor: ");
            scanf("%d", &valor);

            for (int i = 0; i < tam /sizeof(int); i++)
            {
                if (posi == i)
                {
                    vet[i] = valor;
                }else{
                    cont++;
                }
            }

            if (cont == tam /sizeof(int))
            {
                printf("\nPosicao nao encontrada");
            }
            
            break;

        case 2:
            cont = 0;
            printf("Informe uma posicao para buscar um valor: ");
            scanf("%d", &posi);

            for (int i = 0; i < tam /sizeof(int); i++)
            {
                if (posi == i)
                {
                    printf("%d", vet[i]);
                }else{
                    cont++;
                } 
            }
            if (cont == tam /sizeof(int))
            {
                printf("\nPosicao nao encontrada");
            }
            break;

        case 3:
            for (int i = 0; i < tam /sizeof(int); i++)
            {
                printf("%d ", vet[i]);
            }
            break;

        case 4:
            printf("Saindo......");
            break; 
        
        default:
            printf("Opcao invalida\n");
            break;
        }

     } while (op != 4);
    
    return 0;
}
