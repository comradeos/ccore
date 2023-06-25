#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main() {
    int nums[] = { 5, 7, 1 };
    int * p_nums = nums;
    
    printf("nums[0]: %d\n", * (p_nums + 0)); // 5
    printf("nums[1]: %d\n", * (p_nums + 1)); // 7
    printf("nums[2]: %d\n", * (p_nums + 2)); // 1

    char words[][10] = { "word1", "word2", "word3" }; // 10 - max len of word
    char * p_words = (char *) words;
    printf("words[0]: %s\n", words[0]);
    printf("words[0]: %s\n", p_words[1]);

    printf("ok\n");
    return 0;
}
