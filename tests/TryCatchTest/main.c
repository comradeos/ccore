#include <stdio.h>
#include <setjmp.h>

jmp_buf jump_buffer;

void divide(int a, int b) {
    if (b == 0) {
        longjmp(jump_buffer, 1234234);
    } else {
        printf("Result: %d\n", a / b);
    }
}

int main() {
    int number1 = 10;
    int number2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &number1, &number2);

    if (setjmp(jump_buffer) == 0) {
        divide(number1, number2);
    } else {
        printf("Exception: Division by zero\n");
    }

    return 0;
}