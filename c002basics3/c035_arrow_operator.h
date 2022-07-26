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

void c035Tasks();

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


    // инициализация двумерного массива
    myStructType structArray2x[3][2] = {

    {
            {1,1,'a'},
            {1,2,'b'},
        },

    {
            {2,1,'c'},
            {2,2,'d'},
        },

    {
            {3,1,'e'},
            {3,2,'f'},
        },

    };

    printf("\n");

    // вывод двумерного массива
    for (int j = 0; j < 3; ++j) {
        for (int k = 0; k < 2; ++k) {
            printf("a=%d b=%d c=%c\n",
                   structArray2x[j][k].a, structArray2x[j][k].b, structArray2x[j][k].c);
        }
    }

    printf("--------------------------------------------------------\n");
    c035Tasks();

}


struct t3Person {
    char * name;
    double height;
};

typedef struct t3Person t3PersonType, *t3PersonTypePtr;

void initPerson(t3PersonTypePtr personPtr, char *name, double height) {
    personPtr->name = name;
    personPtr->height = height;
}

void c035Tasks() {
    // 1) создайте массив вещественных чисел, проинициализируйте его и отобразите на экране.
    double t1FloatArray[] = {
            1.2,
            2.3,
            3.4,
    };
    int t1FloatArrayLen = sizeof(t1FloatArray)/sizeof(t1FloatArray[0]);
    for (int i = 0; i < t1FloatArrayLen; ++i) {
        printf("%0.2f\n", t1FloatArray[i]);
    }

    // 2) создайте массив строк, проинициализируйте его и отобразите на экране.
    char t2stringArray[3][255] = {
            "string1",
            "string2",
            "string3",
    };
    for (int i = 0; i < 3; ++i) {
        printf("%s\n", t2stringArray[i]);
    }

    // 3) Создайте структуру с двумя полями - имя человека и рост.
    t3PersonType person = {"Iaroslav Os", 1.82};
    printf("Name: %s, Height: %0.2f\n", person.name, person.height);
    t3PersonTypePtr personPtr = &person;
    personPtr->name = "Inna";
    personPtr->height = 1.45;
    printf("Name: %s, Height: %0.2f\n", person.name, person.height);

    // 4) Создайте массив структур из задания 3, проинициаоизируйте его и отобразите на экране.
    t3PersonType personsList[] = {
            {"Natasha", 1.5},
            {"Egor", 1.7},
    };
    int personsListSize = sizeof(personsList)/sizeof(personsList[0]);
    for (int i = 0; i < personsListSize; ++i) {
        printf("Name: %s, Height: %0.2f\n", personsList[i].name, personsList[i].height);
    }

    // 5) Создайте процедуру, которая будет инициализировать структуру из задания 3.
    initPerson(personPtr, "Admin", 1.83);
    printf("Name: %s, Height: %0.2f\n", person.name, person.height);
}