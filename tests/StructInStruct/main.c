#include "stdio.h"

typedef struct MyStruct {
    int number;
    struct MyStruct * myStruct;
} MyStruct_t;


int main() {
    MyStruct_t ms1;
    ms1.number = 25;

    MyStruct_t ms;
    ms.number = 1;
    ms.myStruct = &ms1;
    
    printf("hello\n");
    printf("hello, %d\n", ms.myStruct->number);
}

// 12345678901234567890123456789101234567123456