#include "stdio.h"

typedef struct MyStruct {
    int number;
    struct MyStruct * myStruct;
} MyStruct_t;


int main() {
    MyStruct_t ms;
    ms.number = 33;
    printf("hello, %d\n", ms.number);
}