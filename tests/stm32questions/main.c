#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


void printArray(int * arr, size_t size) {
    for(int i = 0; i < size; ++i) {
        printf("%d", arr[i]);
    }
}

void foo() {
    int * array = (int *)malloc(5 * sizeof (int));
}


int main() {
    printf("Hello, World!\n");
    int x = 5;
    int y = 3;

    x += 2.5;
    y = --y;

    printf("%d\n", x);
    printf("%d\n", y);

    printf("---------------\n");

    bool success = false;
    while (success) {
        printf("hello world\n");
    }

    int arr[5] = {3, 6, 9, 5, 7};
    printArray(arr, 5);

    foo();

    return 0;
}

