//
// Created by Admin on 10/15/2022.
//

#ifndef C002BASICS3_C041_FILES_READ_WRITE_POSITION_H
#define C002BASICS3_C041_FILES_READ_WRITE_POSITION_H

#endif //C002BASICS3_C041_FILES_READ_WRITE_POSITION_H

void c041_files_read_write_position() {

    FILE *f;
    f = fopen("c041_file_1.txt", "w");
        fprintf(f, "hello file\n");
    fclose(f);


}