// gcc -o app.exe -Wall c05_argc_argv.c && app.exe

#include <stdio.h>

int main(int argc, char * argv[])
{
    int x = 7;

    printf("argc = %d \n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("argv #%d = %s \n", i, argv[i]);
    }
    
    return 0;
}
