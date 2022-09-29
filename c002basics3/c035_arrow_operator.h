//
// Created by Admin on 9/29/2022.
//

#ifndef CCORE_C035_ARROW_OPERATOR_H
#define CCORE_C035_ARROW_OPERATOR_H

#endif //CCORE_C035_ARROW_OPERATOR_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef int myType, *myTypePtr;
/*
 * myType - собственный тип на основе int
 * *myTypePtr - собственный тип, который является указателем (обратить внимание на звездочку)
 */


struct myStruct {
    int a, b;
};

typedef struct myStruct myStructType, *myStructTypePtr;

void c035_arrow_operator() {
    myType i = 7;
    myTypePtr iPrt = &i;
    *iPrt = 11;
    printf("%d\n", i);

    int myArray[] = {1, 2, 3};
    int len = sizeof(myArray)/sizeof(myArray[0]); // узнать размер массива, работает только для статических массивов
    printf("len=%d\n", len);

    for (int j=0; j<len; ++j) {
        printf("%d", myArray[j]);
        if (j == 2) printf("\n");
        else printf(", ");
    }



    struct myStruct obj1;
    obj1.a = 1;
    obj1.b = 2;
    printf("obj1.a=%d obj1.b=%d\n", obj1.a, obj1.b);
    struct myStruct *obj1Ptr;
    obj1Ptr = &obj1;
    (*obj1Ptr).a = 2;
    (*obj1Ptr).b = 4;
    printf("obj1.a=%d obj1.b=%d\n", obj1.a, obj1.b);

    myStructType obj2;
    obj2.a = 7;
    obj2.b = 8;
    printf("obj2.a=%d obj2.b=%d\n", obj2.a, obj2.b);
    myStructTypePtr obj2Ptr;
    obj2Ptr = &obj2;
    obj2Ptr->a = 14;
    obj2Ptr->b = 16;
    printf("obj2.a=%d obj2.b=%d\n", obj2.a, obj2.b);


}