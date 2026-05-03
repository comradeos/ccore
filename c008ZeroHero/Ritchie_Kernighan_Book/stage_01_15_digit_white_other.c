#include <stdio.h>

int main()
{
    int ndigit[10];
    int nwhite = 0;
    int nother = 0;
 
    int i;

    for (i = 0; i < 10; ++i)
    {
        ndigit[i] = 0;
    }

    int c;

    printf("input: ");

    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
        {
            ++ndigit[c - '0'];
        } 
        else if (c == ' ' || c == '\n' || c == '\t')
        {
            ++nwhite;
        } 
        else
        {
            ++nother;
        }
    }
 
    for (i = 0; i < 10; ++i)
    {
        printf("%d ", ndigit[i]);
    }
    
    printf("\n");
    printf("nwhite: %d \n", nwhite);
    printf("nothere: %d \n", nother);

    printf("\n");
   
    return 0;
}
