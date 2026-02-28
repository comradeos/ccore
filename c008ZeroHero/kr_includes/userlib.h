#ifndef MYLIB_H
#define MYLIB_H

typedef struct
{
    int id;
    char name[20];
} User;

void print_info(User);

#endif