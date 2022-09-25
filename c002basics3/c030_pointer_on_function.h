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

int mixAB(int a, int b) {
    if (a < b) {
        return a;
    } else if (b < a) {
        return b;
    }
    return 0;
}

// TFuncAB можно передавать в качестве аргумента
void getOne(TFuncAB function) {
    printf("%d\n", function(4,2));
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
    func4 = mixAB;
    printf("%d\n", func4(74,9));


    getOne(func3); // 4
    getOne(func4); // 2

}