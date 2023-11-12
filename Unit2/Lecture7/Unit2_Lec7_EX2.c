/*
Author: Ahmed Sherif
Created: 12/11/2023
Description: C Program to print all the alphabets using a pointer.
in the program.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    char arr[26];
    char *ptr;
    ptr=arr;
    for(i=0;i<26;i++){
        *ptr='A'+i;
        ptr++;
    }
    ptr=arr;
    for(i=0;i<26;i++){
        printf("%c\n",*ptr);
        ptr++;
    }
    return 0;
}

