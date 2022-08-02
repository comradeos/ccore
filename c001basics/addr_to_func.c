// gcc -o application.exe -Wall addr_to_func.c && application.exe
#include <stdio.h>
#include <stdlib.h>

void change(int * num, int new)
{
    * num = new;
}

int main(int argc, char *argv[])
{
    int number = 10;
    printf("%d\n", number);
    change(&number, 20);
    printf("%d\n", number);

    return 0;
}