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
    bmw.weight = 730.00f;

    struct Car audi = {300, "Audi A8", 2700.00f};

    printf("%s : %d\n", audi.name, audi.speed);
    printf("%s : %d\n", bmw.name, bmw.speed);

    return 0;
}
