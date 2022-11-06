#include <stdio.h>
#include <stdlib.h>
#include <string.h>






void imprimirData(int dia, int mes, int ano);




int main()
{
    int dia, mes, ano;

    printf("Informe sua data de aniversario (dd/mm/aaaa): ");
    scanf("%d%d%d", &dia, &mes, &ano);

    imprimirData(dia, mes, ano);

    return 0;
}
void imprimirData(int dia, int mes, int ano){


    typedef struct{
     char mes[30];
    }Meses;

    Meses meses[13];
    strcpy(meses[1].mes , "Janeiro");
    strcpy(meses[2].mes , "Fervereiro");
    strcpy(meses[3].mes , "Marco");
    strcpy(meses[4].mes , "Abril");
    strcpy(meses[5].mes , "Maio");
    strcpy(meses[6].mes , "Junho");
    strcpy(meses[7].mes , "Julho");
    strcpy(meses[8].mes , "Agosto");
    strcpy(meses[9].mes , "Setembro");
    strcpy(meses[10].mes , "Outubro");
    strcpy(meses[11].mes , "Nomvembro");
    strcpy(meses[12].mes , "Dezembro");

    for (int i = 1; i < 13; i++)
    {
        if (mes == i)
        {
            printf("%d, de %s de %d", dia, meses[i].mes, ano);
        }
    } 
}
