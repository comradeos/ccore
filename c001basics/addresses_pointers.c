// gcc -o application.exe -Wall addresses_pointers.c && application.exe
#include <stdio.h>

int main(int argc, char * argv[])
{   
    int i = 10; // переменная
    int * pi = &i; // указатель на переменную
    int ** ppi = &pi; // указатель на указатель на переменную
    int *** pppi = &ppi; // указатель на указатель на указатель на переменную

    printf("%d\n", i);
    *pi = 20; // положить значение 20 в переменную, находящуюся по адресу *pi (&i)
    printf("%d\n", i);
    **ppi = 30;
    printf("%d\n", i);
    ***pppi = 40;
    printf("%d\n", i);

    return 0;
}