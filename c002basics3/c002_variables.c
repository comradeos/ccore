#include <stdio.h>
#include <stdlib.h>

int main()
{
    char text[] = "this is a text";
    int * pText = &text;

    printf("%s | %c | %p | %c ", text, text[0], pText, *pText);
    return 0;
}
