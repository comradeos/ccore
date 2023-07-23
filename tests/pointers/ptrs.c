#include "stdio.h"


void changeNumber(int * num, int value) {
    * num = value;
}

int main(int agrc, char ** agrv){
    // printf("agrc: %d\n", agrc);
    // printf("agrv[0]: %s\n", agrv[0]);
    // printf("agrv[1]: %s\n", agrv[1]);
    int a = 555;
    printf("a = %d\n", a);
    changeNumber(&a, 12);
    printf("a = %d\n", a);
}