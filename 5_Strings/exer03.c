#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char plv[30];
    printf("Informe um palavra\n");
    scanf("%29[^\n]", plv);

    if (plv[0]=='a' || plv[1]=='A')
        printf("Palavra: %s", plv);
    else
        printf("Erro, sao mostrada apenas frases que comeca com a ou A\n");
    
    return 0;
}
