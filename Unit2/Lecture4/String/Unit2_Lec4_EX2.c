/*
Author: Ahmed Sherif
Created: 03/09/2023
Description: This program will find the length of a string
*/
#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("Enter a string: ");
    scanf("%s", str);
    for(i = 0; str[i] != '\0'; ++i);
    printf("Length of string: %d", i);
    return 0;
}