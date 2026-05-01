#include <stdio.h>

int main()
{
    int ndigit[10];
    int i;

    for (i = 0; i < 10; ++i)
    {
        ndigit[i] = 0;
    }

    for (i = 0; i < 10; ++i)
    {
        printf("%d ", ndigit[i]);
    }
    
    printf("\n");
        
    return 0;
}
