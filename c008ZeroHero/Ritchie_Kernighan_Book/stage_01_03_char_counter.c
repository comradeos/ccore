// gcc -Wall -o ./app stage_01_03_char_counter.c && ./app

#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("Input: ");
    
    int counter = 0;

    while (true)
    {
        int character = getchar();

        if (character == EOF)
        {
            break;
        }

        ++counter;

        printf("%d) %d\n", counter, character);
    }

    printf("counter: %d\n", counter);

    return 0;
}

