//
// Created by Admin on 10/1/2022.
//

#ifndef CCORE_C037_WORK_WITH_FILES_BINARY_MODE_H
#define CCORE_C037_WORK_WITH_FILES_BINARY_MODE_H

#endif //CCORE_C037_WORK_WITH_FILES_BINARY_MODE_H

void c037Tasks();
void c037_work_with_files_binary_mode() {
    FILE * f;

    int i = 7;

    f = fopen("c037File.txt", "w");
    fwrite(&i, 1, sizeof(i), f);
    // Функция

    fclose(f);




    // c037Tasks();
}
void c037Tasks() {
    printf("c037Tasks\n");
}