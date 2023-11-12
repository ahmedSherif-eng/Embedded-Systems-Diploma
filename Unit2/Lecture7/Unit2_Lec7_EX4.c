/*
Author: Ahmed Sherif
Created: 12/11/2023
Description: C Program to The elements of array in reverse order are :
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
   int arr[15];
   int size=0;
   int i=0;
   int *ptr;
   printf("\nInput the number of elements to store in the array (max 15) : ");
   fflush(stdin);
   scanf("%d",&size);
   ptr=&arr[size-1];
   printf("\nInput %d number of elements in the array :\n",size);
   for(i;i<size;i++)
   {
    printf("element-%d :",i+1);
    scanf("%d",&arr[i]);
   }
   printf("\nThe elements of array in reverse order are :\n");
   for(i=size-1;i>=0;i--,ptr--)
        printf("element - %d : %d\n",i+1,*ptr);


    return 0;
}

