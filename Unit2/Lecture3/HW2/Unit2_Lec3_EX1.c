/*
Author: Ahmed Sherif
Created: 28/08/2023
Description: This program will check if the number is even or odd
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
   printf ("Enter an integer you want to check: ");
   scanf("%d",&num);
    if(num%2==0)
    {
         printf("%d is even",num);
    }
    else
    {
         printf("%d is odd",num);
    }
    return 0;
}
