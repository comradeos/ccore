//
// Created by Admin on 10/2/2022.
//

#ifndef CCORE_C038_TASKS_35_36_37_H
#define CCORE_C038_TASKS_35_36_37_H

#endif //CCORE_C038_TASKS_35_36_37_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



// 3) Создайте структуру с двумя полями - имя человека и рост.
typedef struct SMan {
    char * name;
    double height;
} TMan, *PMan;


// 5) Создайте процедуру, которая будет инициализировать структуру из задания 3.
void initMan(PMan pointer, char * name, double height) {
    pointer->name = name;
    pointer->height = height;
}

void c038_tasks_35_36_37() {
    // 35
    // 1) создайте массив вещественных чисел, проинициализируйте его и отобразите на экране.
    double array[] = {1.2, 2.3, 3.4 };
    int len = sizeof(array)/sizeof(array[0]);
    len--;
    for (; len >= 0; len--) {
        printf("%0.2f\n", array[len]);
    }
    printf("----------------------\n");


    // 2) создайте массив строк, проинициализируйте его и отобразите на экране.
    char * strArray[2] = {
            "hello",
            "world"
    };
    len = sizeof(strArray)/sizeof(strArray[0]);
    for (int i = 0; i < len; ++i) {
        printf("%s\n", strArray[i]);
    }
    printf("----------------------\n");


    // 3) Создайте структуру с двумя полями - имя человека и рост.
    TMan man = { "Iaroslav Os", 1.83 };
    printf("%s %0.2f\n", man.name, man.height);
    PMan manPointer = &man;
    manPointer->name = "Inna G"; // альтернативно TMan *p = &man; (*p).name = "Inna G";
    manPointer->height = 1.53; // альтернативно  TMan *p = &man; (*p).height = 1.53;
    printf("%s %0.2f\n", man.name, man.height);
    printf("----------------------\n");


    // 4) Создайте массив структур из задания 3, проинициаоизируйте его и отобразите на экране.
    TMan manArray[3] = {
            {"Me", 1.8 },
            {"You", 1.5 },
            {"They", 0 },
    };
    len = sizeof(manArray)/sizeof(manArray[0]);
    for (int i = 0; i < len; ++i) {
        printf("%s %0.2f\n", manArray[i].name, manArray[i].height);
    }
    printf("----------------------\n");


    // 5) Создайте процедуру, которая будет инициализировать структуру из задания 3.
    initMan(&manArray[0], "Hello", 1);
    initMan(&manArray[1], "Once", 2);
    initMan(&manArray[2], "Again", 3);
    for (int i = 0; i < len; ++i) {
        printf("%s %0.2f\n", manArray[i].name, manArray[i].height);
    }
    printf("----------------------\n");



    // 36
    // 1) Запишите в файл 10 любых строк текста.
    FILE * f;
//    f = fopen("c038File.txt", "w");
//    for (int i = 0; i < 10; ++i) {
//        fprintf(f, "str #%i\n", i);
//    }
//    fclose(f);



    // 2) Прочитайте все строки файла из задания 1 и отобразите на экране.
    f = fopen("c038File.txt", "r");
    char string[1024];
    while (!feof(f)) {
        if (fgets(string, 1024, f) != NULL) {
            printf("%s", string);
        }
    }
    fclose(f);
    // Измените файл с помощью любого редактора, добавив или удалив строки, и снова прочитайте его с помощью программы.
    printf("\n----------------------\n");


    // 3) С помощью любого редактора создайте файл и запишите в него несколько чисел.
    // Считайте все числа из файла, удвойте их значения и отобразите на экране.
    f = fopen("c038File.txt", "r");
    float value;
    while (!feof(f)) {
        if (fscanf(f, "%f", &value) > 0) {
            printf("%0.2f\n", value * 2);
        }
    }
    fclose(f);
    printf("----------------------\n");



    // 37
    // 1) запишите в файл несколько переменных целого типа, а затем прочитайте и отобразите на экране.
    int numArray[5] = { 123, 212, 323, 422, 51 };
    len = sizeof(numArray)/sizeof(numArray[0]);

    f = fopen("c038_2File.txt", "w");
        fwrite(numArray, 1, sizeof(numArray), f);
    fclose(f);

    f = fopen("c038_2File.txt", "r");
    int num;
    while (!feof(f)) {
        if (fread(&num, 1, sizeof(num), f)) {
            printf("%d\n", num);
        }
    }
    fclose(f);



    // 2) выполните пункт 1, но вместо целого типа используйте структуру.
    typedef struct SInts {
        int a, b;
    } TInts, *PInts;
    TInts arr[] = {
            {1, 2},
            {2, 4},
            {3, 5},
    };
    f = fopen("c038_2File.txt", "w");
        fwrite(arr, 1, sizeof(arr), f);
    fclose(f);

    f = fopen("c038_2File.txt", "r");
    TInts buffer;
    while (!feof(f)) {
        if (fread(&buffer, 1, sizeof(buffer), f) > 0) {
            printf("[%d, %d]\n", buffer.a, buffer.b);
        }
    }
    fclose(f);
    printf("----------------------\n");


    // 3) запишите в файл и прочитайте несколько переменных разных типов подряд.
    int intVal = 7;
    double doubleVal = 7.13;
    char charWord[20] = "hello";
    f = fopen("c038_2File.txt", "w");
        fwrite(&intVal, 1, sizeof(intVal), f);
        fwrite(&doubleVal, 1, sizeof(doubleVal), f);
        fwrite(charWord, 1, sizeof(charWord), f);
    fclose(f);

    int newIntVal;
    double newDoubleVal;
    char newCharWord[20];
    f = fopen("c038_2File.txt", "r");
        fread(&newIntVal, 1, sizeof(newIntVal), f);
        fread(&newDoubleVal, 1, sizeof(newDoubleVal), f);
        fread(newCharWord, 1, sizeof(newCharWord), f);
    fclose(f);

    printf("%d, %0.2f, %s", newIntVal, newDoubleVal, newCharWord);



    // 4) попробуйте записать в файл и прочить из файла структуру, одним и полей которой будет другая структура.
}