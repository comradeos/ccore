#include <stdio.h>
#include <stdbool.h>
#define N 8

/**
 * @brief
 * Выводит содержание числового массива
 * @param int A[]
 */
void print_array(int A[])
{
    for (int i = 0; i < N; i++)
    {
        printf("%3d ", A[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int A[N] = {
        0,
        10,
        20,
        30,
        40,
        50,
        60,
        70,
    };

    int B[N] = {0};

    // скопировать массив
    for (int i = 0; i < N; i++)
    {
        B[i] = A[i];
    }

    // реверсивно скопировать массив
    for (int i = 0; i < N; i++)
    {
        B[i] = A[N - i - 1];
    }

    print_array(A);
    print_array(B);
    printf("\n");

    print_array(A);
    // развернуть массив
    for (int i = 0; i < N / 2; i++)
    {
        int tmp = A[i];
        A[i] = A[N - i - 1];
        A[N - i - 1] = tmp;
        // print_array(A);
    }

    print_array(A);

    return 0;
}

// gcc -o application.exe -Wall array_copy.c && application.exe