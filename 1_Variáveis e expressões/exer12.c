#include <stdio.h>
#include <stdlib.h>


void milhas_km(float *milhas);
void km_milhas(float *milhas);

int main()
{
    float *milhas, *km;

    printf("Informe a distancia em milhas: ");
    scanf("%f", &milhas);
    milhas_km(&milhas);

    printf("\n\nInforme a distancia em km: ");
    scanf("%f", &km);
    km_milhas(&km);

   
    return 0;
}
void milhas_km(float *milhas){

    float km;
    km = 1.6 * *milhas;
    printf("%.2f milhas = %.2f km", *milhas, km);
}
void km_milhas(float *km){
    float milhas;

    milhas =  *km / 1.6;
    printf("%.2f km = %.2f milhas ", *km, milhas);
}
