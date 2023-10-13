/*
Author: Ahmed Sherif
Created: 13/10/2023
Description: C Program to Store Information of Students Using Structure
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Sstudent
{
    char name[50];
    double marks;
};
int main() {
    struct Sstudent section1[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter roll number %d\n",i+1);
        printf("Enter Name: ");
        gets(section1[i].name);
        printf("Enter Marks ");
        scanf("%lf",section1[i].marks);
        printf("\n\n");
    }
    printf("Displaying informations of students\n");
    for(i=0;i<10;i++)
    {
        printf("information of roll number %d\n",i+1);
        printf("Name: %s\n",section1[i].name);
        printf("Marks: %lf\n",section1[i].marks);
        printf("\n\n");
    }
    return 0;
}
\
