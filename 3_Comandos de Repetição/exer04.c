#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    for (int i = 0; i < 999; i++)
    {
        num += 1000;
        if (num == 100000)
            break;
    }
    printf("%d", num);

    return 0;
}
