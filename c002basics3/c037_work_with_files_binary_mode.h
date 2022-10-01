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

    // Записываем число в бинарном режиме
    f = fopen("c037File.txt", "w");
        fwrite(&i, 1, sizeof(i), f);
        // Функция fwriteзаписывает информация в бинарном режиме,
        // первый параметр - адрес области памяти где лежат данные для записи в файл,
        // второй параметр - количество элементов,
        // третий параметр - размер каждого элемента,
        // последний параметр - идинтификатор файла
    fclose(f);

    int buffer;
    f = fopen("c037File.txt", "r");
        fread(&buffer, 1, sizeof(buffer), f);
    fclose(f);

    printf("%d\n", buffer);




    // Запишем массив
    int array[10] = {1,2,3,4,5,6,7,8,9,0};
    f = fopen("c037File.txt", "w");
        fwrite(array, 1, sizeof(array), f);
    fclose(f);

    int buf[10];
    f = fopen("c037File.txt", "r");
        fread(buf, 1, sizeof(buf), f);
    fclose(f);

    int length = sizeof(buf)/sizeof(int);
    for (int k = 0; k < length; ++k) {
        printf("%d ", buf[k]);
    }
    printf("\n");




    // считать файл от начала и до конца,
    // если количство элементов неизвестно
    f = fopen("c037File.txt", "r");
    int temp;
    while (!feof(f)) {
        if (fread(&temp, 1, sizeof(temp), f)) {
            printf("%d ", temp);
        }
    }
    printf("\n");
    fclose(f);




    // проделаем тоже самое но со структурой
    struct SPoint37 {
        int a,b;
    };

    typedef struct SPoint37 TPoint37, *PPoint37;

    TPoint37 point = {7,9};
    PPoint37 pointPtr = &point;

    f = fopen("c037File.txt", "w");
        fwrite(pointPtr, 1, sizeof(point), f);
    fclose(f);


    TPoint37 newPoint;
    PPoint37 newPointPtr = &newPoint;
    f = fopen("c037File.txt", "r");
        fread(newPointPtr, 1, sizeof(newPoint), f);
    fclose(f);
    printf("%d %d\n", newPoint.a, newPoint.b);


    // c037Tasks();
}
void c037Tasks() {
    printf("c037Tasks\n");
}