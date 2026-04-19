#include <stdio.h>

int add(int a, int b);

int main(void) {
	// printf("hello world\n");
	printf("hello world\n add(1, 2) = %d\n", add(1, 2));
	return 42;
}

int add(int a, int b) {
	return a + b;
}
