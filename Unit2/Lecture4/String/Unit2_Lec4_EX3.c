/*
Author: Ahmed Sherif
Created: 03/09/2023
Description: This program will reverse a string
*/
#include<stdio.h>
int main()
{
    char str[100], temp;
    int i, j = 0;
    printf("Enter the string: ");
    scanf("%s", str);
    i = 0;
    j = strlen(str) - 1;
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    printf("Reverse string is: %s", str);
    return 0;
}