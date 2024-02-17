int mx_strlen(const char *s) { // Определение функции, которая принимает строку (s) в качестве аргумента.
    int i = 0; // Инициализация счетчика символов в строке.
    while (s[i] != '\0') // Цикл, который продолжается, пока не достигнет конца строки (нулевого символа).
        i++; // Увеличение счетчика на 1 на каждой итерации цикла.
    return i; // Возвращение количества символов в строке.
}
