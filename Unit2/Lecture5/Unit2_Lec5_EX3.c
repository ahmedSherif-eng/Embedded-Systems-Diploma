/*
Author: Ahmed Sherif
Created: 25/09/2023
Description: This program reverse a sentence given by user
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
void reverseSentence();
int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}

