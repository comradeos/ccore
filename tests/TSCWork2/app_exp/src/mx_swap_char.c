void mx_swap_char(char*s1, char*s2) { // Определение функции, которая принимает два указателя на символы (s1 и s2) в качестве аргументов.
    char temp; // Объявление временной переменной для хранения символа.
    temp = *s1; // Сохранение символа, на который указывает s1, во временной переменной.
    *s1 = *s2; // Присвоение символа, на который указывает s2, символу, на который указывает s1.
    *s2 = temp; // Присвоение символа, сохраненного во временной переменной, символу, на который указывает s2. Таким образом, символы, на которые указывают s1 и s2, меняются местами.
}
