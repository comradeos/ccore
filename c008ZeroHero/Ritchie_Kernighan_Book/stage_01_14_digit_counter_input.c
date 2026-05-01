#include <stdio.h>

int main()
{
    int ndigit[10];
 
    int i;

    for (i = 0; i < 10; ++i)
    {
        ndigit[i] = 0;
    }

    int c;

    printf("input: ");

    while ((c = getchar()) != EOF)
    {
        if (c < '0' || c > '9')
        {
            continue;
        }

        ++ndigit[c - '0'];
    }
 
    for (i = 0; i < 10; ++i)
    {
        printf("%d ", ndigit[i]);
    }
    
    printf("\n");
   
    return 0;
}
