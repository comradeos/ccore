#include "header.h" // Подключение заголовочного файла

bool mx_isdigit(char c) { // Определение функции, которая принимает символ (c) в качестве аргумента.
    if (c >= '0' && c <= '9') { // Если символ является цифрой (от '0' до '9')...
        return true; // ...возвращаем true.
    }
    else { // Если символ не является цифрой...
        return false; // ...возвращаем false.
    }
}