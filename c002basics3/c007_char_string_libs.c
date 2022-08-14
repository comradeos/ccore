#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // ббл для чтения 

int main() {
    char ch = 'W';
    printf("%c\n", ch);

    // scanf("%c", &ch);
    ch = getch(); // библ conio.h, возвращает символ в качестве результата, не требует нажатия enter
    printf("ch = %c\n", ch);

    char str[16] = "Hello, World!";
    str[0] = '7';
    printf("str = %s\n", str);

    // что бы присвоить строку сразу всему массиву использовать sprintf
    sprintf(str, "new string!");
    str[3] = '\0'; // символ конца строки
    printf("str = %s\n", str);

    return 0;
}