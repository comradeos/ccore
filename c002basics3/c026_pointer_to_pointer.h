#include <stdio.h>
#include <stdlib.h>

void c026_pointer_to_pointer() {
    int k = 777; // variable
    int *p = &k; // pointer to var
    *p = 111; // change value using pointer

    int **p2 = &p; // set p2 = address of p
    **p2 = 333;



    printf("%d\n", k);
}
