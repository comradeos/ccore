#include <stdio.h>

#define BR printf("\n")

int main()
{
    int i = 0;

    for (;;)
    {
        if (i == 10)
        {
            break;
        }

        ++i;

        printf("%d ", i);
    }

    BR;

    i = 0;

    for (i = 0; i < 11; i = i + 2)
    {
        printf("%d ", i);
    }

    BR;
    
    i = 10;

    while (i >= 0)
    {
        printf("%d ", i);
        i--;
    }

    BR;
      
    return 0;
}
