#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_array(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    int arr[100] = {0};
    int size = 0;

    // добавить элемент
    arr[0] = 25; 
    size++;
    
    print_array(arr, size);

    // удалить элемент
    size--;

    print_array(arr, size);

    return 0;
}

// gcc -o application.exe -Wall array_append_remove.c && application.exe