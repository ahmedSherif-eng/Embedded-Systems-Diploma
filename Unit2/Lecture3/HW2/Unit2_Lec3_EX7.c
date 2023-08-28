/*
Author: Ahmed Sherif
Created: 28/08/2023
Description: This program will calculate the factorial of a number
*/
#include<stdio.h>
int main()
{
    int fact=1;
    int num;
    int i;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else if(num==0)
        printf("Factorial of 0 is 1");
    else
    {for(i=1;i<=num;i++)
        fact*=i;
        printf("Factorial of %d is %d",num,fact);
    }
    return 0;
}