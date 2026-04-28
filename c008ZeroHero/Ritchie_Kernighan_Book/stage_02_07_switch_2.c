#include <stdio.h>

int main()
{
    printf("input: ");
    
    int c = getchar();

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

    return 0;
}
