#include <stdio.h>
#include <stdbool.h>
#define N 50

// Решето Эратосфена на Си

int main(int argc, char *argv[])
{
    int sieve[N] = {0};

    for (int i = 2; i * i < N; ++i)
    {
        for (int k = i * i; k < N; k += i)
        {
            if (sieve[i] == 0)
            {
                sieve[k] = 1;
            }
        };
    };

    for (int i = 0; i < N; ++i)
    {
        printf("%3d", i);
    };

    printf("\n");

    for (int i = 0; i < N; ++i)
    {
        printf("%3d", sieve[i]);
    };

    return 0;
}

// gcc -o application.exe -Wall sieve_eratosthenes.c && application.exe