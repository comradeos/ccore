#include <stdio.h>

int main()
{
    printf("input: ");
    
    int c = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == 10) 
        {
            continue;
        }

        switch(c)
        {
            case 'a':
                printf("letter a");
                break;
            case 'b':
                printf("letter b");
                break;
            case 'c':
                printf("letter c");
                break;
            default:
                printf("other");
         }

         printf("\n");
    }

    return 0;
}
