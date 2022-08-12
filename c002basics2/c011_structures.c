#include <stdio.h>
#include <string.h>

// структура как предок класса
struct Car {
    int speed;
    char name[50];
    float weight;
};

int main()
{
    struct Car bmw; // новый объект структуры

    bmw.speed = 250;
    // bmw.name = "BMW M5"; - не сработает, только через strcpy + #include <string.h>
    strcpy(bmw.name, "BMW M5");
    printf("%s\n", bmw.name);
    
    return 0;
}
