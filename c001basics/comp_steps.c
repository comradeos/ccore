#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;
    printf("Hello from c language!");
    return 0;
}

/*

Подготовить программу к компиляции программу:
gcc -E comp_steps.c > comp_steps_prepared.c

Перевести подготовленный файл comp_steps_prepared.c 
на машинный язык (создать файл comp_steps_prepared.о):
gcc -c comp_steps_prepared.c
Лучше выводить все предупреждения флагом -Wall. 
Пример: gcc -c -Wall comp_steps_prepared.c

Скомпилировать comp_steps_prepared.о в исполняемый файл comp_steps_prepared.exe
gcc -o comp_steps_prepared.exe comp_steps_prepared.o

--------------------------------------------------------------------------------

Подготовить файл, перевести на машинный язык, 
вывести возможные предупреждения, 
скомпилировать и запустить:
gcc -o comp_steps.exe -Wall comp_steps.c && comp_steps.exe 

*/