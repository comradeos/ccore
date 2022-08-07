// gcc -o app.exe -Wall c04_if_else.c && app.exe

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    int x = 7;
    int y = 7;

    if (x == 5)
    {
        printf("yes \n");
    }
    else
    {
        printf("no \n");
    }

    // логическое или
    if (x > 3 || x < 8)
    {
        printf("x > 3 || x < 8 \n");
    }

    // логическое и
    if (x == 7 && y == 7)
    {
        printf("x == 7 && y == 7 \n");
    }

    return 0;
}
