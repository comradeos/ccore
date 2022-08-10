#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int A[100];
    while (1)
    {
        int counter = 0;
        int a;
        scanf("%d", &A[counter]);
        if (counter >= 100 || A[counter] == 0)
        {
            break;
        }
        counter++;
    }

    printf("A[0] = %d\n", A[0]);    
    printf("A[1] = %d\n", A[1]);    
    printf("A[2] = %d\n", A[2]);    

    return 0;

    printf("input a: ");
    int a;
    scanf("%d", &a);
    printf("a = %d", a);
}
