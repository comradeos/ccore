// gcc -o application.exe -Wall array_empty_test.c && application.exe

#include <stdio.h>
#include <stdbool.h>
#define SIZE 10

void print_array(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
    int arr[SIZE]={0};
    int max = 10;

    print_array(arr, max);

    return 0;
}

