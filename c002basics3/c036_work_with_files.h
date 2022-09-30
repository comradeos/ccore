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

    fprintf(f, "%c\n", 'A');
    // fprintf - делает тоже что и printf только в указанный файл
    // в CLion поумолчанию фал будет находиться в папке cmake-build-debug\001.txt
    fprintf(f, "%s\n", "this is a string"); // записать строку
    fclose(f); // обязательно просле работы с файлом


    f = fopen("001.txt", "r");
    char string[1000]; // переменная для массива символов (строки)
    fscanf(f,"%c", string);
    printf("%s\n", string);
    fclose(f);
}