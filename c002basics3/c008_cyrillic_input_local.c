#include <stdio.h>
#include <stdlib.h>

#include <locale.h>
#include <windows.h>
#include <winuser.h>


int main() {
    setlocale(LC_ALL, "Russian");
    char myString[255];
    gets(myString);

    printf("s = %s\n", myString);

    return 0;
}
