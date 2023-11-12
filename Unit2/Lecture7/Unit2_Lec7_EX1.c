/*
Author: Ahmed Sherif
Created: 12/11/2023
Description: C Program to demonstrate how to handle the pointers
in the program.
*/
#include <stdio.h>
#include <stdlib.h>
int main() {

    int m=29;
    int* ab=&m;
    printf("Address of m : 0x%x\n",&m);
    printf("Value of m : %d\n\n",m);
    printf("Now ab is assigned with the address of m.\n");
    printf("Address of pointer ab :0x%x\n",ab);
    printf("Content of pointer ab :%d\n\n",*ab);
    m=34;
    printf("The value of m assigned to 34 now.\n");
    printf("Address of pointer ab :0x%x\n",ab);
    printf("Content of pointer ab :%d\n\n",*ab);
    *ab=7;
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Address of m : 0x%x\n",&m);
    printf("Value of m : %d\n\n",m);

    return 0;
}

