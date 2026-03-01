#include <stdio.h>
#include <stdlib.h>

char *f()
{
    char s[] = "hello"; // в стеке создается массив байтов hello
    return s;
    // стек перестает существовать
}

int main(void)
{
    char *p = f(); // указаль на участок памятти с мусором
    printf("%s\n", p);
    return 0;
}
