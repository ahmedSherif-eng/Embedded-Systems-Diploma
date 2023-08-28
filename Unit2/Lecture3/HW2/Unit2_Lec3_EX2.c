/*
Author: Ahmed Sherif
Created: 28/08/2023
Description:  This program will check if the character is vowel or consonant
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    char alph;
   printf ("Enter an alphabt: ");
   scanf("%c",&alph);
    if(alph>=65 && alph<=90)
    {
        printf("The character is consonant");
    }
    else if(alph>=97 && alph<=122)
    {
        printf("The character is vowel");
    }
    else
    {
        printf("The character is not an alphabt");
    }
    return 0;
}
