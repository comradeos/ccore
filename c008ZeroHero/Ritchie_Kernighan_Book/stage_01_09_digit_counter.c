// gcc -Wall -o ./app stage_01_09_digit_counter.c && ./app

#include <stdio.h>

int main()
{
    printf("Input: ");

    int c = 0;

    int digits[10] = {0};

    int other = 0;

    while ((c = getchar()) != EOF) 
    {
        printf("%d %c \n", c, c);
        
        if (c >= '0' && c <='9')
        {
            ++digits[c - '0'];
        } else {
            ++other;
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        if (digits[i] == 0)
        {
            continue;
        }

        printf("%c: %d\n", i + '0', digits[i]);
    }

    printf("other: %d\n", other);

    return  0;
}

