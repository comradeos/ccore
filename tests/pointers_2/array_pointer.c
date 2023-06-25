#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    char arr[] = "abc";
    char * p_arr = arr;

    printf("%s\n", *p_arr);
    return 0;
}
