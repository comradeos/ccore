//
// Created by Admin on 10/9/2022.
//

#ifndef C002BASICS3_C040_FILES_BINARY_MODE_H
#define C002BASICS3_C040_FILES_BINARY_MODE_H

#endif //C002BASICS3_C040_FILES_BINARY_MODE_H


void c040_files_binary_mode() {
    FILE *f; // объект файла
    char c[3] = "AB"; // слово из 2х символов

    f = fopen("c040_file_1", "w"); // открываем файл в режиме записи
        fprintf(f,"%s", c); // записываем строку
    fclose(f); // закрываем файл
}