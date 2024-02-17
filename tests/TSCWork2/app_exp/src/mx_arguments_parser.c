#include "header.h" // Подключение заголовочного файла, который, вероятно, содержит объявления функций и констант.

// Функция проверяет, является ли строка числом или символом '?'
bool mx_scan_number(char *value){
    if(mx_strlen(value) == 0){ // Если строка пуста, возвращаем false
        return false;
    }

    for(int i = 0; value[i]; i++){ // Проходим по каждому символу строки
        // Если символ не цифра и не '?', и не минус в начале строки, возвращаем false
        if((!mx_isdigit(value[i]) && value[i] != '?') && !(value[i] == '-' && i == 0)){
            return false;
        }
    }
    return true; // Если все символы прошли проверку, возвращаем true
}

// Функция проверяет, является ли строка оператором или символом '?'
bool mx_scan_op(char *value){
    if(mx_strlen(value) == 0){ // Если строка пуста, возвращаем false
        return false;
    }
    int question_sign_counter = 0; // Счетчик символов '?'

    for(int i = 0; value[i]; i++){ // Проходим по каждому символу строки
        if(question_sign_counter > 1) // Если встретили больше одного символа '?', возвращаем false
            return false;
        if(value[i] == '?') // Если встретили символ '?', увеличиваем счетчик
            question_sign_counter++;
    }

    char *temp = mx_strtrim(value); // Удаляем пробелы в начале и конце строки
    // Если строка не равна ни одному из допустимых операторов, возвращаем false
    if(mx_strcmp(temp, "?") != 0 && mx_strcmp(temp,"+") != 0 && mx_strcmp(temp,"-") != 0 && mx_strcmp(temp,"*") != 0 && mx_strcmp(temp,"/") != 0){
        return false;
    }
    free(temp); // Освобождаем память
    return true; // Если все символы прошли проверку, возвращаем true
}

// Функция проверяет, является ли строка допустимым значением в зависимости от типа
bool mx_scan_value(char *value, int type){
    int valid = 0; // Флаг валидности

    switch(type){ // В зависимости от типа вызываем соответствующую функцию проверки
        case OPERAND:
            valid = mx_scan_number(value);
            break;
        case OPERATOR:
            valid = mx_scan_op(value);
            break;
        case RESULT:
            valid = mx_scan_number(value);
        default:
            break;
    }
    return valid; // Возвращаем результат проверки
}

// Функция анализирует аргументы, удаляет пробелы и проверяет их валидность
void mx_arguments_parser(char **a, char **o, char **b, char **r) {
    *a = mx_strtrim(*a); // Удаляем пробелы в начале и конце строки
    *o = mx_strtrim(*o); // Удаляем пробелы в начале и конце строки
    *b = mx_strtrim(*b); // Удаляем пробелы в начале и конце строки
    *r = mx_strtrim(*r); // Удаляем пробелы в начале и конце строки
    
    // Если оператор не валиден, выводим ошибку и завершаем программу
    if(!mx_scan_value(*o, OPERATOR)){
        mx_process_error(INVALID_OPERATION, *o);
        exit(-1);
    }
    
    // Если первый операнд не валиден, выводим ошибку и завершаем программу
    if(!mx_scan_value(*a, OPERAND)){
        mx_process_error(INVALID_OPERAND, *a);
        exit(-1);
    }
    
    // Если второй операнд не валиден, выводим ошибку и завершаем программу
    if(!mx_scan_value(*b, OPERAND)){
        mx_process_error(INVALID_OPERAND, *b);
        exit(-1);
    }

    // Если результат не валиден, выводим ошибку и завершаем программу
    if(!mx_scan_value(*r, RESULT)){
        mx_process_error(INVALID_RESULT, *r);
        exit(-1);
    }
}

