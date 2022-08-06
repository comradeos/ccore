// gcc -o application.exe -Wall c02_vars.c && application.exe

#include <stdio.h>

int main()
{
    char * my_string = "asd";

    my_string = "This is my string!";

    printf("%s\n", my_string);

    return 0;
}