/*
Author: Ahmed Sherif
Created: 28/08/2023
Description: This program will check the largest number among three numbers
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    float x,y,z;
    printf("Enter three numbers: ");
    scanf("%f %f %f",&x,&y,&z);
    if(x>y && x>z)
    {
        printf("The largest number is %f",x);
    }
    else if(y>x && y>z)
    {
        printf("The largest number is %f",y);
    }
    else if(z>x && z>y)
    {
        printf("The largest number is %f",z);
    }
    else
    {
        printf("The numbers are equal");
    }

    return 0;
}