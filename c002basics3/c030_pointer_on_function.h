#include <stdio.h>
#include <stdlib.h>


// делаем тип переменной которая будет указазателем на функцию
typedef int (*TFuncAB)(int, int);

int get5() {
    return 5;
}

int maxAB(int a, int b) {
    if (a > b) {
        return a;
    } else if (b > a) {
        return b;
    }
    return 0;
}

int minAB(int a, int b) {
    if (a < b) {
        return a;
    } else if (b < a) {
        return b;
    }
    return 0;
}

// TFuncAB можно передавать в качестве аргумента
int getOne(int array[], TFuncAB function) {
    int value = array[0];
    printf("value = %d array[i] = %d\n", value, array[0]);
    for (int i = 0; i < 10; ++i) {
        printf("value = %d array[i] = %d\n", value, array[i]);
        value = function(value, array[i]);
    }
    return value;
}


void c030_pointer_on_function() {
    int (*func)();
    /*
     * Пояснение:
     * func - имя указателя на функцию
     * int говорит о том что указатель должен указывать на функцию которая возвращает целый тип
     * () пустые скобки говорят о том что функция не принимает никаких параметров
     */
    func = get5;
    printf("%d\n", func());

    int (*func2)(int, int);
    func2 = maxAB;
    printf("%d\n", func2(7,9));

    TFuncAB func3;
    func3 = maxAB;
    printf("%d\n", func3(74,9));

    TFuncAB func4;
    func4 = minAB;
    printf("%d\n", func4(74,9));

    int array[10] = {92,41,23,41,345,73,21,3,1,75};


    int result;

    // result = getOne(array, func3);
    // printf("%d\n", result); // 345

    result = getOne(array, func4);
    printf("%d\n", result); // 1




}