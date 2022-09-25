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
    return a;
}

int minAB(int a, int b) {
    if (a < b) {
        return a;
    } else if (b < a) {
        return b;
    }
    return a;
}

// TFuncAB можно передавать в качестве аргумента
int getOne(int array[], TFuncAB function) {
    int value;
    value = array[0];
    if (function != NULL) {
        for (int i = 0; i < 10; ++i) {
            value = function(value, array[i]);
        }
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
    printf("\n");


    int array[10] = {292,421,233,411,345,73,21,13,12,75};

    int result;

    result = getOne(array, func3);
    printf("%d\n", result); // 345
    result = getOne(array, func4);
    printf("%d\n", result); // 1


}