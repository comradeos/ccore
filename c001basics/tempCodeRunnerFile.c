// gcc -o application.exe -Wall addr_void.c && application.exe
#include <stdio.h>

int main(int argc, char *argv[])
{
    char c;   
    int i;   
    double d;

    void * p;
    printf("%d\n", p);

    char my_string[] = "Hello world";

    printf("%s\n", my_string);


    p = &c;
    p = &i;
    p = &d;

    return 0;
}