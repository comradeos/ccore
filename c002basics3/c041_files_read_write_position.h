//
// Created by Admin on 10/15/2022.
//

#ifndef C002BASICS3_C041_FILES_READ_WRITE_POSITION_H
#define C002BASICS3_C041_FILES_READ_WRITE_POSITION_H

#endif //C002BASICS3_C041_FILES_READ_WRITE_POSITION_H

void c041_files_read_write_position() {

    FILE *f;
    f = fopen("c041_file_1.txt", "w+"); // + - и запись и чтение
        printf("%ld\n", ftell(f)); // ftell(f) возвращает позицию курсора в байтах
        fprintf(f, "ABC123");

        // переместимся на 3й байт и запишем 2 других символа
        fseek(f, 2, SEEK_SET); // fseek(файл, позиция курсора, начало отсчета позиции курсора)
        fprintf(f, "++");


        char c[100];
        fseek(f, 0, SEEK_SET);
        if (fgets(c, 100, f) != NULL) {
            printf("%s\n", c);
        }

        printf("%ld\n", ftell(f));
    fclose(f);


}