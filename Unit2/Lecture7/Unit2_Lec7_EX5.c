/*
Author: Ahmed Sherif
Created: 12/11/2023
Description: C Program to show a pointer to an array which contents
are pointer to structure.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Semployee{
    char name[15];
    char id[5];
};
int main() {
    struct Semployee* arr[2];
    struct Semployee** ptr;
    struct Semployee manager;
    arr[0]=&manager;
    strcpy(arr[0]->name,"Alex");
    strcpy(arr[0]->id,"1002");
    ptr=&arr[0];
    printf("Employee Name: %s\nEmployee ID: %s",(*ptr)->name,(*ptr)->id);


    return 0;
}

