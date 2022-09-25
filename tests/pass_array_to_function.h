#include <stdio.h>

void changeArrayElement(int * arr) {
    arr[0] = 777;
}

int pass_array_to_function() {
    int array[3] = {1, 2, 3};
    printf("%d\n", array[0]);
    changeArrayElement(array);
    printf("%d\n", array[0]);
    return 0;
}