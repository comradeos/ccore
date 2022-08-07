// gcc -o app.exe -Wall c04_if_else.c && app.exe

#include <stdio.h>

int main(int argc, char * argv[])
{
    int x = 7;

    printf("argc = %d \n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("argv #%d = %s \n", i, argv[i]);
    }
    

    if (x == 5) {
        printf("yes \n");
    } else {
        printf("no \n");
    }

    return 0;
}
