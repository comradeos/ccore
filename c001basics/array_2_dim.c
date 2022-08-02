// gcc -o application.exe -Wall array_2_dim.c && application.exe

#include <stdio.h>
#include <stdlib.h>

#define MATRIX_HEIGHT 4 
#define MATRIX_WIDTH 5 

int main(int argc, char *argv[])
{
    int A[MATRIX_HEIGHT][MATRIX_WIDTH] = {0}; // MATRIX_WIDTH - должна быть константой на время компиляции
    for (int i = 0; i < MATRIX_HEIGHT; i++)
    {
        for (int j = 0; j < MATRIX_WIDTH; j++)
        {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}