#include <stdio.h>

int sum(int a, int b);

int main() { 
    printf("%d\n", sum(5, 3));
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
