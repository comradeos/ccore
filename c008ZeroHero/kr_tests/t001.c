#include <stdio.h>

int main(void) {

    // char *s = "hello";
    // s[0] = 'H'; // ошибка потому попітка изменить read only память (rodata) 

    char s[] = "hello";
    printf("1 - %s\n", s);
    s[0] = 'H';
    printf("2 - %s\n", s);

    return 0;
}