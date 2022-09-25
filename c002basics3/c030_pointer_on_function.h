#include <stdio.h>
#include <stdlib.h>


void setB321(int *b) {
    *b = 321;
}
void setArray0(int * arr) {
    arr[1] = 222;
}

void c030_pointer_on_function() {
    int b = 9;
    setB321(&b);
    printf("%d", b);

    int arr[5] = {1,2,3,4,5};
    setArray0(arr);
    printf("%d\n", arr[1]);
}