#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    printf("Input number:");
    scanf("%d", &x);

    int n = 1;
    while (x)
    {
        int digit = x % 10;
        n *= digit;
        x /= 10;
    }

    printf("%d\n", n);    

    return 0;
}

/*
gcc -o application.exe -Wall inductive.c && application.exe 
*/