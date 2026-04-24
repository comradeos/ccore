#include <stdio.h>

void print_bar(int);

int main()
{
    printf("Input: ");

    int digits[10] = {0};

    int c;

    while ((c = getchar()) != EOF)
    {
        if (c < '0' || c > '9')
        {
            continue;
        }

        ++digits[c - '0'];
    }

    int number;
    int counter;

    for (int i = 0; i < 10; ++i)
    {   
        number = i;
        counter = digits[i];
        
        if (counter == 0)
        {
            continue;
        }

        printf("%d: ", number);
       
        print_bar(counter);
       
        printf("\n");
    }

    return 0;
}

void print_bar(int len)
{
    for (int i = 0; i < len; ++i)
    {
        printf("*");
    }
}

