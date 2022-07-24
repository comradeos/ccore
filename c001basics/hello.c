// gcc -o application.exe -Wall hello.c && application.exe

#include <stdio.h>  // standart input/output header
#include <stdlib.h> // standart library header

int main(int argc, char *argv[])
{
    printf("%d\n", argc);    // arguments count
    printf("%s\n", argv[0]); // value of arguments
    printf("\nhello, c");    // regular string
    return 0;                // done with no errors
}