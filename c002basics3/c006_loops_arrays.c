#include <stdio.h>
#include <stdlib.h>


int main() {
    int i;
    int mas[10];
    
    mas[0] = 555;
    mas[1] = 777;
    mas[2] = 111;
    
    i = 0;
    while (i < 10) {
        if (i > 4) {
            mas[i] = i*i;
        } else {
            mas[i] = 7;
        }
        i = i + 1;
    }

    i = 0;
    while (i < 10) {
        printf("%d = %d\n", i, mas[i]);
        i = i + 1;
    }
    
    return 0;
}
