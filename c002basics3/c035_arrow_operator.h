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
    char c;
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


    struct myStruct obj1 = {1, 2, 'a'};
    printf("obj1.a=%d obj1.b=%d obj1.c=%c\n", obj1.a, obj1.b, obj1.c);
    struct myStruct *obj1Ptr;
    obj1Ptr = &obj1;
    (*obj1Ptr).a = 2; // или obj1Ptr->a = 2;
    (*obj1Ptr).b = 4;
    (*obj1Ptr).c = 'b';
    printf("obj1.a=%d obj1.b=%d obj1.c=%c\n", obj1.a, obj1.b, obj1.c);


    myStructType obj2 = {7, 8, 'd'};
    printf("obj2.a=%d obj2.b=%d obj2.c=%c\n", obj2.a, obj2.b, obj2.c);
    myStructTypePtr obj2Ptr;
    obj2Ptr = &obj2;
    obj2Ptr->a = 14;
    obj2Ptr->b = 16;
    obj2Ptr->c = 'n';
    printf("obj2.a=%d obj2.b=%d obj2.c=%c\n", obj2.a, obj2.b, obj2.c);


    myStructType structArray[] = {
            {1,2,'a'},
            {2,3,'b'},
            {3,4,'c'},
    };

    int structArrayLen = sizeof(structArray)/sizeof(structArray[0]);

    for (int j = 0; j < structArrayLen; ++j) {
        printf("structArrayLen.a=%d structArrayLen.b=%d structArrayLen.c=%c\n",
               structArray[j].a, structArray[j].b, structArray[j].c);
    }
}