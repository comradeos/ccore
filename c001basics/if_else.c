#include <stdio.h>

int main(int argc, char *argv[])
{
    int x = 1;

    while (x != 0)
    {
        printf("Input x: "); 
        scanf("%d", &x);

        if (x%2 == 0) {
            printf("Number %d is even.\n", x); 
        } else if (x == 7) {
            printf("777\n"); 
        }
    }
    
    return 0;
}

/*

clear && gcc -o if_else.exe -Wall if_else.c && if_else.exe

*/