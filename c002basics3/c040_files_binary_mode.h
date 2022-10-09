//
// Created by Admin on 10/9/2022.
//

#ifndef C002BASICS3_C040_FILES_BINARY_MODE_H
#define C002BASICS3_C040_FILES_BINARY_MODE_H

#endif //C002BASICS3_C040_FILES_BINARY_MODE_H

#include <fcntl.h> // полезные макросы для работы с файлами

void c040Tasks();

void c040_files_binary_mode() {

    FILE *f; // объект файла

    _fmode == _O_BINARY;
    _fmode == _O_TEXT;

    printf("%s\n", _fmode == _O_TEXT ? "TEXT" : "BINARY");

    char c[3] = "AB"; // слово из 2х символов
    c[1] = 10; // символ перевода строки

    f = fopen("c040_file_1", "w"); // открываем файл в режиме записи
        fprintf(f,"%s", c); // записываем строку
    fclose(f); // закрываем файл

    // прочитаем файл
    char buf[10] = "";
    f = fopen("c040_file_1", "r"); // открываем файл в режиме чтения
        fread(buf, 1, sizeof(buf), f);
    fclose(f); // закрываем файл

    printf("%s\n", buf);
    // выведим коды символов

    for (int i = 0; i < 10; ++i) {
        printf("%d ", buf[i]);
    }
    printf("\n");

    // запишем в бинарном режиме
    f = fopen("c040_file_1", "w");
        fprintf(f,"%s", c); // записываем строку
    fclose(f); // закрываем файл


    // прочитаем файл в бинарнов режиме
    f = fopen("c040_file_1", "rb");
        fread(buf, sizeof(buf), 1, f);
    fclose(f); // закрываем файл

    for (int i = 0; i < 10; ++i) {
        printf("%d ", buf[i]);
    }
    printf("\n");

    c040Tasks();
}

void c040Tasks() {
    // создайте массив целых чисел из 5 элементов и запишите в файл,
    // открытый в текстовом режимме.
    int arr[5] = { 1, 2, 3, 4, 5 };
    FILE *myFile;
    myFile = fopen("c040_file_2", "wt");
    for (int i = 0; i < 5; ++i) {
        fprintf(myFile, "%d\n", arr[i]);
    }
    fclose(myFile);

    // После чего прочитайте и отобразите на экране.
    int numBuf;
    myFile = fopen("c040_file_2", "rt");
    while (!feof(myFile)) {
        if (fscanf(myFile, "%d", &numBuf) > 0) {
            printf("%d ", numBuf);
        }
    }
    printf("\n");
    fclose(myFile);

    // Замените средний элемент на значение 26 и запустите программу.
    // Откройте файл в бинарном режиме и запустите еще раз.

}


