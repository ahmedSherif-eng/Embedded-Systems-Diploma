/*
Author: Ahmed Sherif
Created: 28/08/2023
Description: This program will check if the number is positive or negative
*/
#include <stdio.h>
int main()
{
    float num;
    printf("Enter a number: ");
    scanf("%f",&num);
    if(num>0)
    {
        printf("%f is positive",num);
    }
    else if(num<0)
    {
        printf("%f is negative",num);
    }
    else
    {
        printf("The number is zero");
    }
    return 0;
}