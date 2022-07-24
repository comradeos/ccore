#include <stdio.h>

// Это просто пример, не пользуйтесь goto

int main(int argc, char *argv[])
{
    printf("Using 'goto':\n");

    int x = 1;
    
    START_OVER:
    printf("Input x: ");
    scanf("%d", &x);
    
    if(x == 0) return 0;
    if(x % 2 == 0) goto EVEN;
    if(x % 2 != 0) goto ODD;
    
    EVEN: 
    printf("Number %d is even.\n", x);
    goto START_OVER;

    ODD:
    printf("Number %d is odd.\n", x);
    goto START_OVER;

    return 0;
}

/* ----------------------------------------------------------------------------------------------

Абсолютный эквивалент программы на языке здорового программиста:

int main(int argc, char *argv[])
{
    printf("Using no 'goto':\n");
    int x = 1;
    while (x != 0)
    {
        printf("Input x: ");
        scanf("%d", &x);

        if(x % 2 == 0) 
        {
            printf("Number %d is even.\n", x);
        } else {
            printf("Number %d is odd.\n", x);
        }
    }
    return 0;
}
---------------------------------------------------------------------------------------------- */



/* ----------------------------------------------------------------------------------------------

clear && gcc -o never_goto_example2.exe -Wall never_goto_example2.c && never_goto_example2.exe

---------------------------------------------------------------------------------------------- */