#include <stdio.h>
#include <stdlib.h>

int sum(int, int);

int main(void) {
    printf("This is test lldb (gdb)\n");
    int *a = malloc(sizeof *a); // а єто куча? 
    int b = sum(2, 3); // єто в стеке? 
    printf("sum: %d\n", b);
    return 0;
}

int sum(int a, int b) {
    return a + b;
}