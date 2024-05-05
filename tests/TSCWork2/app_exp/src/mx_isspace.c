#include "header.h" // Включение заголовочного файла, который содержит определения и прототипы функций

bool mx_isspace(char c) { // Функция, проверяющая, является ли символ пробельным
    if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r') { // Если символ является пробелом, табуляцией, новой строкой, вертикальной табуляцией, переводом формата или возвратом каретки
        return true; // Возвращаем true
    }
    else { // Если символ не является пробельным
        return false; // Возвращаем false
    }
}