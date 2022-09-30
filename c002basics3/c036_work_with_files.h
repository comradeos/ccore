//
// Created by Admin on 9/30/2022.
//

#ifndef CCORE_C036_WORK_WITH_FILES_H
#define CCORE_C036_WORK_WITH_FILES_H

#endif //CCORE_C036_WORK_WITH_FILES_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void c036Tasks();

void c036_work_with_files() {
    FILE *f;
    // FILE - тип переменной которая хранит информацию о файле,
    // *f - указатель на файл (или идентификатор файла)

    f = fopen("001.txt", "w");
    // foper() - открывает файл и возвращает его идентификатор
    // "001.txt" - имя файла
    // "w" - способ открытия файла,
    // w означает что файл будет создан для записи (или перезаписан, если такое файл уже существовал)

    // fprintf(f, "%c\n", 'A');
    // fprintf - делает тоже что и printf только в указанный файл
    // в CLion поумолчанию фал будет находиться в папке cmake-build-debug\001.txt
    fprintf(f, "%s\n", "this is a string"); // записать строку
    fclose(f); // обязательно просле работы с файлом


    f = fopen("001.txt", "r");
    char string[1000]; // переменная для массива символов (строки)
    fscanf(f,"%s", string); // fscanf считывает слово (символі до пробела, переноса строки и т.д)
    printf("%s\n", string);
    fgets(string, 1000, f); // fscanf всю строку
    printf("%s\n", string);
    fclose(f);

    printf("------------------\n");




    f = fopen("001.txt", "w");
    fprintf(f, "%s\n", "this is a string #1");
    fprintf(f, "%s\n", "this is a string #2");
    fclose(f);

    char buffer[1000];

    f = fopen("001.txt", "r");
    while (!feof(f)) { // пока не достигнут конец файла
        if (fgets(buffer, 1000, f)) { // выполнять printf только если строка считалась
            printf("%s", buffer);
        }
    } // feof возвращает true если достигнут конец файла
    fclose(f);

    printf("------------------\n");

    // читать все слова по слову
    f = fopen("001.txt", "r");
    while (!feof(f)) {
        fscanf(f, "%s\n", buffer);
        printf("%s\n", buffer);
    }
    fclose(f);


    printf("------------------\n");


    // работа с числами в файле
    f = fopen("002.txt", "w");
    fprintf(f, "%d\n", 100);
    fprintf(f, "%g\n", 2.5);
    fclose(f);

    f = fopen("002.txt", "r");
    while (!feof(f)) {
        if (fgets(buffer, 1000, f)) {
            printf("%s", buffer);
        }
    }
    fclose(f);


    // прочитаем в переменные соответствующих типов
    int intVal;
    double doubleVal;
    f = fopen("002.txt", "r");
    if (f == NULL) {
        printf("Error, can't read file!\n");
    } else {
        while (!feof(f)) {
            fscanf(f, "%d", &intVal);
            fscanf(f, "%lg", &doubleVal);
        }
        fclose(f);
        printf("%d %lg\n", intVal, doubleVal);
    }


    printf("------------------\n");


    c036Tasks();
}

void c036Tasks() {
    // 1) Запишите в файл 10 любых строк текста.
    // Проверьте правильность записи с помощью любого редактора.
    FILE * c036TasksFile;
    c036TasksFile = fopen("c036Tasks.txt", "w");
    for (int i = 0; i < 10; ++i) {
        fprintf(c036TasksFile, "String %d\n", i);
    }
    fclose(c036TasksFile);

    // 2) Прочитайте все строки файла из задания 1 и отобразите на экране.
    // Измените файл с помощью любого редактора, добавив или удалив строки, и снова прочитайте его с помощью программы.
    c036TasksFile = fopen("c036Tasks.txt", "r");
    char string[1024];
    while (!feof(c036TasksFile)) {
        if (fgets(string, 1024, c036TasksFile)) {
            printf("%s", string);
        }
    }
    fclose(c036TasksFile);


    printf("------------------\n");


    // 3) С помощью любого редактора создайте файл и запишите в него несколько чисел.
    // Считайте все числа из файла, удвойте их значения и отобразите на экране.
    c036TasksFile = fopen("c036Task3Nums.txt", "r");
    int number;
    while (!feof(c036TasksFile)) {
        fscanf(c036TasksFile,"%d\n", &number);
        printf("%d\n", number*2);
    }
    fclose(c036TasksFile);

}