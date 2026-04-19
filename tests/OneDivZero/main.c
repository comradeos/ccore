#include <stdio.h>

int main() {
    int zero = 0;
    int res = 1 / zero; // 0
    // int res = 1 / 0; // rand ex 83002464
    printf("res = %d\n", res);
    return 0;
}

// gcc -o app ./main.c 