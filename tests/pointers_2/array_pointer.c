#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int nums[] = { 5, 7, 1 };
    int * p_nums = nums;
    printf("nums[0]: %d\n", * (p_nums + 2));
    return 0;
}
