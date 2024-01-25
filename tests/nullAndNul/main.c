#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int *a = NULL;
    char *b = NULL;
    bool c = a == b;
    printf("%d\n", c);
    return 0;
}