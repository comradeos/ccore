#include <stdio.h>
#include <stdlib.h>

void createInt(int **p) {
    *p = malloc(sizeof (int));
}

void c026_pointer_to_pointer() {
    int k = 777; // variable

    int *p = &k; // pointer to var
    *p = 111; // change value using pointer

    int **p2 = &p; // set p2 = address of p (pointer to pointer)
    **p2 = 333;

    int ***p3 = &p2; // (pointer to pointer(to pointer))
    ***p3 = 555;

    printf("%d\n", k);



    printf("example:\n");

    int *valueP = NULL; // create NULL pointer
    createInt(&valueP); // allocate memory for valueP

    if (valueP != NULL) { // check if pointer is not null
        *valueP = 777; // set value
        printf("%d\n", *valueP); // print
    }

    free(valueP); // free memory
    valueP = NULL;

}
