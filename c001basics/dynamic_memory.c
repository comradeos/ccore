// gcc -o application.exe -Wall dynamic_memory.c && application.exe
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int N;
    printf("Input size of array:\n");
    scanf("%d", &N);

    char * A = (char *) malloc(N); // выделить память

    if (NULL == A) {
        printf("No memory given!\n");
    }

    for (int i = 0; i < N; i++) { // заполнение массива
        A[i] = i;
    }

    printf("Success!\n");
    system("pause");
    
    return 0;
}