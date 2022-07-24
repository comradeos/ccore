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

    print_array(A);

    // сдвиг массива влево
    int tmp = A[0];

    for (int i = 0; i < N-1; i++)
    {
        A[i] = A[i + 1];
    }
    A[N-1] = tmp;
    print_array(A);

    return 0;
}

// gcc -o application.exe -Wall array_offset_left.c && application.exe