#include <stdio.h>

#define SYM "* "

void square(int);
void traingle(int);
void traingle_inverted(int);


int main()
{
    square(5);
    traingle(5);
    traingle_inverted(5);

    return 0;
}

void square(int side)
{
    int i, j = 0;

    for (i = 0; i < side; ++i)
    {
        for (j = 0; j < side; ++j)
        {
            printf(SYM);
        }
        
        printf("\n");
    }

    printf("\n");
}

void traingle(int height)
{
    int i, j = 0;

    for (i = 1; i <= height; ++i)
    {
        for (j = 0; j < i; ++j)
        {
            printf(SYM);
        }

        printf("\n");
    }

    printf("\n");
}

void traingle_inverted(int height)
{
    int i, j = 0;

    for (i = height; i > 0; --i)
    {
        for (j = 0; j < i; ++j)
        {
            printf(SYM);
        }

        printf("\n");
    }

    printf("\n");
}




