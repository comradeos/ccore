#include "header.h" // Подключение заголовочного файла, который, вероятно, содержит объявления функций и констант.

void mx_printint(int n) { // Определение функции, которая принимает одно целое число (n) в качестве аргумента.
    long num = n; // Преобразование входного числа в тип long для обработки больших чисел.
 
    if (num < 0) { // Если число отрицательное...
        mx_printchar('-'); // ...выводим знак минус...
        num *= -1; // ...и делаем число положительным для дальнейшей обработки.
    } 
 
    int n_next = num / 10; // Получаем все цифры числа, кроме последней.
 
    if (n_next != 0) { // Если в числе больше одной цифры...
        mx_printint(n_next); // ...рекурсивно вызываем функцию для оставшегося числа.
    } 
 
    mx_printchar((num % 10) + 48); // Выводим последнюю цифру числа. Добавляем 48, чтобы преобразовать цифру в соответствующий символ ASCII.
}
