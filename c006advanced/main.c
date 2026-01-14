#include <stdio.h>
#include <stdbool.h>

void void_pointers();
void bit_flags();
void function_pointers();
void sep();

int main() {
	function_pointers();
	sep();

	bit_flags();
	sep();

	void_pointers();
	sep();

	return 0;
}






// VOID POINTERS

void void_pointers() {
	printf("Void Pointers:\n");

	int n = 3;
	void *p_n = &n;

	printf("n = %d\n", n);
	printf("p_n = %p\n", p_n);
	printf("*p_n = %d\n", *(int*)p_n);

}

// VOID POINTERS







// BIT FLAGS 

typedef enum {
	IS_SUM     = (1 << 0),
	IS_SQUARED = (1 << 1),
	IS_NOT     = (1 << 2)
} t_flag;

int res(int num, t_flag flags) {
	if (flags & IS_SUM) num += num;
	if (flags & IS_SQUARED) num *= num;
	if (flags & IS_NOT) num = ~num;
	return num;
}

void bit_flags() {
	printf("Bit Flags:\n");
	
	int num = 2;

	int result = res(num, 0);
	printf("result: %d\n", result);
		
	result = res(num, IS_SUM);
	printf("result: %d\n", result);
	
	result = res(num, IS_SUM | IS_SQUARED);
	printf("result: %d\n", result);
	
	result = res(num, IS_NOT);
	printf("result: %d\n", result);
}	

// BIT FLAGS







// FUNCTION POINTES

int is_even(int num) {
	return num % 2 == 0;
}

void print_even(int nums[5], int (*f)(int)) {
	int num = 0;
	int even = 0;

	for(int i = 0; i < 5; i++) {
		num = nums[i];
		even = f(num);

		if (even == 1) {	
			printf("number %d is even \n", num);
		}
	}
}

void function_pointers() {
	printf("Function Pointers:\n");
	int nums [5] = {1,2,3,4,5};
	print_even(nums, is_even);
}

// FUNCTION POINTERS






// SEP

void sep() {
	printf("\n\n\n\n");
}

// SEP
