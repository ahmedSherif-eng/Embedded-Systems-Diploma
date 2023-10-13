/*
Author: Ahmed Sherif
Created: 13/10/2023
Description:  C Program to Store Information(name, roll and marks) of a Student
Using Structure
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Sstudent
{
    char name[50];
    int roll;
    double marks;
};
int main() {
    struct Sstudent test;
    printf("Enter name: ");
    gets(test.name);
    printf("Enter roll number: ");
    scanf("%d",&test.roll);
    printf("Enter marks: ");
    scanf("%lf",&test.marks);
    printf("\n\nname: %s\n",test.name);
    printf("roll: %d \n",test.roll);
    printf("marks: %.1lf \n",test.marks);
    return 0;
}
\
