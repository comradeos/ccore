#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
    printf("argc: %d\n", argc);
    printf("argv:\n");

    for (size_t i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    
    return 0;
}
