// gcc -o application.exe -Wall addresses_pointers.c && application.exe
#include <stdio.h>

int main(int argc, char * argv[])
{   
    int i = 10; // переменная
    int * pi = &i; // указатель на переменную
    int ** ppi = &pi; // указатель на указатель на переменную
    int *** pppi = &ppi; // указатель на указатель на указатель на переменную

    *pi = 20;

    return 0;
}