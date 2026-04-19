// gcc -Wall -o ./app stage_01_04_line_counter.c && ./app

#include <stdio.h>

int main()
{
    printf("Input: ");

    int character;

    int lines_counter = 0;
    
    while ((character = getchar()) != EOF)
    {
        if (character == '\n')
        {
            ++lines_counter;
        }
    }

    printf("total lines: %d\n", lines_counter);

    return 0;
}

