#include <stdio.h>
#include <assert.h>


/**
 * @brief Данная функция - потенциальный Segmentation fault.
 * 
 * @param pointer указатель.
 */
void my_function(int * pointer)
{
    assert(pointer);
    * pointer = 10;
}



/**
 * @brief Segmentation fault - во время выполнения программы 
 * происходит обращение к недоступному сегменту памяти.
 * Программа автоматически снимается с выполнения операционной системой.
 * 
 * @return int 
 */
int segmentation_fault()
{
    // Пример №1
    int * p1; 
    * p1 = 10;

    // Пример №2
    int x; 
    scanf("%d", x);

    // Пример №3
    int * p2;
    my_function(p2);

    return 0;
}



int * duplicate_array(int * A, size_t N)
{
    int * B = (int *) malloc(sizeof(int)*N);
    for (size_t i = 0; i < N; i++)
    {
        B[i] = A[i];
    }
    printf("duplicate_array() allocated memory for the duplicate.\n");
    return B;
}



/**
 * @brief Memory leak (утечка памяти) - программа выполняется 
 * но  постоянно выделяет память. 
 * 
 * @return int 
 */
int memory_leak()
{
    int A[5] = {1, 2, 3, 4, 5};
    int * B = duplicate_array(A, 5);
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", B[i]);
    }
    printf("\n");
    
    return 0;
}



int main(int argc, char * argv[]) 
{
    segmentation_fault();
    memory_leak();
    return 0;
}