/*
Author: Ahmed Sherif
Created: 25/09/2023
Description: This program will find factorial of a number given by user
*/
#include <stdio.h>
#include <stdlib.h>
int factorial(int num);
int main()
{
    int number;
    printf("Enter a positive integer\n");
    fflush(stdin);
    scanf("%d",&number);
    printf("factorial of %d = %d ",number,factorial(number));
    return 0;
}
int factorial(int num){
    if(num>0)
        return num *factorial(num-1);
    else return 1;
}

