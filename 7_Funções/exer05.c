#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float volumeEsfera(float raio){
    float v;
    const pi = 3.141592;
    v = ((4.0 / 3.0) * pi ) * raio * raio * raio;

    return v;
}


int main()
{
    float raio, v;
    printf("Informe o raio: ");
    scanf("%f", &raio);

    v = volumeEsfera(raio);

    printf("\nVolume: %.2f", v);

    return 0;
}
