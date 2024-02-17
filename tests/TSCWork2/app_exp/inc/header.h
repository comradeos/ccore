#ifndef HEADER_H // Если HEADER_H еще не определен
#define HEADER_H // Определить HEADER_H

#include <stdio.h> // Включить стандартную библиотеку ввода-вывода
#include <unistd.h> // Включить библиотеку unistd для функций, таких как read, write и close
#include <stdlib.h> // Включить стандартную библиотеку для функций, таких как malloc и free
#include <stdbool.h> // Включить библиотеку для использования типа bool и значений true и false

// Определение строковых констант для сообщений об ошибках
#define MX_NO_ARGUMENTS "usage: ./part_of_the_matrix [operand1] [operation] [operand2] [result]\n"
#define MX_INVALID_OPERATION_STR "Invalid operation: "
#define MX_INVALID_OPERAND_STR "Invalid operand: " 
#define MX_INVALID_RESULT_STR "Invalid result: "

// Определение перечисления для типов ошибок
enum e_error{
    INVALID_OPERATION,
    INVALID_OPERAND,
    INVALID_RESULT
};

// Определение перечисления для типов элементов выражения
enum e_type{
    OPERAND,
    OPERATOR,
    RESULT
};

// Прототипы функций
void mx_process_error(int error, char *value); // Обработка ошибок
int mx_atoi(const char *str); // Конвертация строки в целое число
bool mx_isdigit(char c); // Проверка, является ли символ цифрой
bool mx_isspace(char c); // Проверка, является ли символ пробелом
char *mx_itoa(int number); // Конвертация целого числа в строку
int mx_pow(int num, int pow); // Возведение числа в степень
void mx_printchar(char c); // Печать символа
void mx_printerr(const char *s); // Печать строки ошибки
void mx_printint(int n); // Печать целого числа
void mx_printstr(const char *s); // Печать строки
int mx_strlen(const char *s); // Получение длины строки
char *mx_strnew(const int size); // Создание новой строки определенного размера
char *mx_strndup(const char *s1, int n); // Дублирование n символов строки
void mx_str_reverse(char *s); // Реверс строки
void mx_swap_char(char *s1, char *s2); // Обмен значениями двух символов
char *mx_strncpy(char *dst, const char *src, int len); // Копирование n символов из строки src в строку dst
char *mx_strcpy(char *dst, const char *src); // Копирование строки src в строку dst
char *mx_strtrim(const char *str); // Удаление пробелов в начале и конце строки
int mx_strcmp(const char *s1, const char *s2); // Сравнение двух строк

// Обработка аргументов и операций
void mx_arguments_parser(char **a, char **o, char **b, char **r);
void mx_operation_handler(char *a, char *o, char *b, char *r);

#endif // Конец условной компиляции