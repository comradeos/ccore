#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int nums[] = { 5, 7, 1 };
    int * p_nums = nums;
    printf("nums[0]: %d\n", * (p_nums + 0)); // 5
    printf("nums[1]: %d\n", * (p_nums + 1)); // 7
    printf("nums[2]: %d\n", * (p_nums + 2)); // 1
    return 0;
}
