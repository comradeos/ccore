#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct Person {
    char name[64];
    int age;
}; 

void updatePerson(struct Person p, int age) {
    
}

int main() {
    struct Person person;
    struct Person* p_person = &person;
    strcpy(p_person->name, "a");
    person.age = 25;

    printf("Person's name: %s\n", person.name);
    return 0;
}

