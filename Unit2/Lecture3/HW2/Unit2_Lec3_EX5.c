/*
Author: Ahmed Sherif
Created: 28/08/2023
Description: This program will check if whether a character is alphabet or not
*/

#include <stdio.h>
int main()
{   
    char alph;
    printf("Enter a character: ");
    scanf("%c",&alph);
    if((alph>=65 && alph<=90) || (alph>=97 && alph<=122))
    {
        printf("%c is an alphabet",alph);
    }
    else
    {
        printf("%c is not an alphabet",alph);
    }
    return 0;
}