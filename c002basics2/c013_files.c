#include <stdio.h>

void readLines(FILE * file, int linesNum);

int main()
{
    // создаем указатель на основе типа данных FILE
    FILE * myFile = fopen("c014_test_file.txt", "a"); // w - перезаписать, a - дописать
    fprintf(myFile, "Hello\n"); // записать в файл
    fclose(myFile); // закрыть файл


    // открыть файл для чтения
    FILE * myFileToRead = fopen("c014_test_file.txt", "r"); // r - читать

    // в определенный массив записать определенное количество символов 
    // которые будут считаны с определенного файла
    // fgets(имяМассива, количествоСимволов, указательФайла)
    
    char line[255];
    fgets(line, 255, myFileToRead);
    printf("%s ------------------\n", line);

    readLines(myFileToRead, 8);
    return 0;
}

void readLines(FILE * file, int linesNum)
{
    char line[255];
    for (size_t i = 0; i < linesNum; i++)
    {
        fgets(line,255,file);
        printf("%s", line);
    }
}