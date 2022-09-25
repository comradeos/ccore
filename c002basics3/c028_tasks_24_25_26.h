struct SMyPoint {
    int x,y;
};

typedef struct SMyPoint TMyPoint;

void c028_tasks_24_25_26() {
    /* 24
    1. Создайте несколько указателей разных типов и выделите для них память.
    Далее присвойте им значения и выведите на экран.
    Помните про очистку памяти и проверку наличия адреса.
    */
    double * doublePtr = NULL;
    doublePtr = malloc(sizeof (double));
    *doublePtr = 231.32;
    printf("%0.2f\n", *doublePtr);

    // тоже самое но со структурой
    TMyPoint * pointer = NULL;
    pointer = malloc(sizeof (TMyPoint));
    (*pointer).x = 2;
    (*pointer).y = 3;
    printf("%d, %d\n", (*pointer).x, (*pointer).y);

    // попробуем для указателя на void (нетипизированный указатель)
    void *unkType = NULL;
    unkType = malloc(8); // выделяем ему 8 байт
    if (unkType != NULL) {
        *(int*) unkType = 777; // приводим тип указателя void к типу указателя int
        printf("%d\n", *(int*) unkType);
    }

    // еще один пример
    if (unkType != NULL) {
        *(char *) unkType = 'a'; // приводим тип указателя void к типу указателя char
        printf("%c\n", *(char*) unkType);
    }



    /* 25
    1. Создайте динамический массив целого типа. Выделите ему память на 10 элементов.
    Заполните массив значениями, чтобы каждое следующее было в 2 раза больше предыдущего.
    Выведете все значения массива на экран.
    2. Увеличьте размер массива на 4 элемента и заполните все новые ячейки одним любым числом
    */
    int size = 10;
    int *array = NULL;
    array = malloc(sizeof(*array) * size); // указатель указывает на int а значит память будет выделена под тип int
    if (array != NULL) {
        for (int i=0; i<size; i++) {
            if (i == 0) {
                array[i] = 1;
            } else {
                array[i] = array[i-1] * 2;
            }
            printf("%d ", array[i]);
        }
        printf("\n");
    }

    /* create a procedure that frees memory of pointer and set it to null */
}