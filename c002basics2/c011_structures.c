#include <stdio.h>
#include <string.h>

struct Car {
    int speed;
    char name[50];
    float weight;
};

int main()
{
    struct Car bmw;
    bmw.speed = 250;
    // bmw.name = "BMW M5";
    strcpy(bmw.name, "BMW M5");
    char str[5] = "hello";
    return 0;
}
