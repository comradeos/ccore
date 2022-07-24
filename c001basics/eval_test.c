#include <stdio.h>
#include <stdbool.h>
#define MY_VAR 100

int main(int argc, char *argv[])
{
    printf("MY_VAR -> %d\n", MY_VAR);

    int array[10];
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}

// gcc -o application.exe -Wall eval_test.c && application.exe