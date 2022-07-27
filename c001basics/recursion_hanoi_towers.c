#include <stdio.h>
#include <stdlib.h>

/**
 * @brief Ханойская башня (задача). Рекурентное решение.
 * 
 * @param n количество дисков для перекладывания
 * @param i переложить откуда
 * @param k переложить куда
 */
void hanoi(int n, int i, int k)
{
    if (n == 1) {
        printf("Move disk 1 from pin %d to %d.\n", i, k);
    } else {
        int tmp = 6-i-k;
        hanoi(n-1, i, tmp);
        printf("Move disk %d from pin %d to %d.\n", n, i, k);
        hanoi(n-1, tmp, k);
    }
}

int main(int argc, char * argv[])
{
    hanoi(3, 1, 2);
    return 0;
}