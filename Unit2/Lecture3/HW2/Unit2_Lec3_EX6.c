/*
Author: Ahmed Sherif
Created: 28/08/2023
Description: This program will calculate the sum of numbers from 1 to n
*/
#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    int i;
    printf("Enter a number:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        sum+=i;
    printf("Sum= %d",sum);
    return 0;
}