/*
Author: Ahmed Sherif
Created: 12/11/2023
Description: C Program to print a string in reverse using a pointer
in the program.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char str[15];
    char rev[15];
    char *ptr;
    int i=0;
    int length=0;
    ptr=str;
    printf("\nPointer : Print a string in reverse order :\n");
    gets(str);
    length=strlen(str);
    rev[length]='\0';
    printf("--------------------------\n");
    printf("Input a string : %s\n",str);
    for(i=length-1;i>=0;i--)
    {
        rev[i]=*ptr;
        ptr++;
    }

    printf("Reverse of the string is : %s\n\n",rev);

    return 0;
}

