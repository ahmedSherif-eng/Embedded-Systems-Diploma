/*
Author: Ahmed Sherif
Created: 03/09/2023
Description: This program will calculate the average of an array of numbers
*/
#include<stdio.h>
int main()
{   int size=0;
    int i;
    float sum=0;
    printf("Enter the number of data: ");
    scanf("%d",&size);
    float arr[size];
    for(i=0;i<size;i++)
    {
        printf("Enter the number: ");
        scanf("%f",&arr[i]);
        sum+=arr[i];
        printf("\n");
    }
    printf("Average =%.2f",sum/size);
    return 0;
}