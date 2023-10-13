/*
Author: Ahmed Sherif
Created: 13/10/2023
Description:  C Program to Add Two Distances (in inch-feet) System Using
Structures
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Sdistance
{
    int feet;
    float inch;
};
int main() {
    struct Sdistance result,x,y;
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d",&x.feet);
    printf("Enter inch: ");
    scanf("%f",&x.inch);
    printf("\n\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d",&y.feet);
    printf("Enter inch: ");
    scanf("%f",&y.inch);
    result.feet=x.feet+y.feet;
    result.inch=x.inch+y.inch;
    if(result.inch>=12)
    {
        result.inch-=12;
        result.feet++;
    }
    printf("Sum of distances =%d'-%.1f",result.feet,result.inch);
    return 0;
}
\
