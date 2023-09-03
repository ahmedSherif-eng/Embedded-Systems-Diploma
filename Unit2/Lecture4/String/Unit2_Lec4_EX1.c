/*
Author: Ahmed Sherif
Created: 03/09/2023
Description: This program will find the frequency of a character in string
*/
#include<stdio.h>
int main()
{
    char str[100], ch;
    int i, frequency = 0;
    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to find the frequency: ");
    scanf("%c",&ch);
    for(i = 0; str[i] != '\0'; ++i)
    {
        if(ch == str[i])
            ++frequency;
    }
    printf("Frequency of %c = %d", ch, frequency);
    return 0;
}