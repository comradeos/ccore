// gcc -Wall -o ./app ./test.c && ./app

#include <stdio.h>

int main()
{
    int num = 3;

    printf("---------------\n");
    printf("%c\n", num);
    printf("%c\n", num + '0');
    printf("---------------\n");


    printf("TEST INPUT: ");

    int c; 

    while ((c = getchar()) != EOF)
    {
        if (c == 10)
        {
            continue;
        }

        printf("[%d -> %c] ", c, c);
    }

    return 0;
}

