int mx_strcmp(const char *s1, const char *s2) { // Определение функции, которая принимает две строки (s1 и s2) в качестве аргументов.
    while (*s1 != '\0' || *s2 != '\0') { // Цикл, который продолжается, пока не достигнет конца одной из строк.
        if (*s1 != *s2) { // Если символы в текущих позициях не равны...
            return *s1 - *s2; // ...возвращаем разницу между символами. Это даст положительное число, если s1 больше s2, и отрицательное, если s1 меньше s2.
        }
        s1++; // Переходим к следующему символу в s1.
        s2++; // Переходим к следующему символу в s2.
    }
    return 0; // Если все символы равны (или обе строки пусты), возвращаем 0.
}