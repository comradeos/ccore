#include <stdio.h>
#include <stdlib.h>

int main() {
    char myString[255];
    gets(myString);
    printf("%s\n", myString);
    return 0;
}