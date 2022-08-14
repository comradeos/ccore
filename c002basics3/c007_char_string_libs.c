#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // ббл для чтения 

int main() {
    char ch = 'W';
    printf("%c\n", ch);

    // scanf("%c", &ch);
    ch = getch(); // библ conio.h, возвращает символ в качестве результата, не требует нажатия enter
    printf("ch = %c\n", ch);


    return 0;
}