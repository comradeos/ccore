#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // библ для чтения символов

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
    str[3] = '\0'; // символ конца строки (обрыв)
    printf("str = %s\n", str);

    printf("Input string: \n");
    scanf("%s", str);
    printf("s = %s\n", str);

    return 0;
}