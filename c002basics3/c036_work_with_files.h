//
// Created by Admin on 9/30/2022.
//

#ifndef CCORE_C036_WORK_WITH_FILES_H
#define CCORE_C036_WORK_WITH_FILES_H

#endif //CCORE_C036_WORK_WITH_FILES_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
    while (!feof(f)) {
        fscanf(f, "%d", &intVal);
        fscanf(f, "%lg", &doubleVal);
    }
    fclose(f);
    printf("%d %lg\n", intVal, doubleVal);


}