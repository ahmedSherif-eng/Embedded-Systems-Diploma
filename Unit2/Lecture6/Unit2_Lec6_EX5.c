/*
Author: Ahmed Sherif
Created: 13/10/2023
Description: C Program to find area ofa circle, passing arguments to macros.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PI  3.14
# define AREA(r) PI*r*r

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f",&radius);
    printf("Area= %f",AREA(radius));
    return 0;
}
\
