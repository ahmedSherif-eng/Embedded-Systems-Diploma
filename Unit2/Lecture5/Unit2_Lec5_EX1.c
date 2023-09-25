/*
Author: Ahmed Sherif
Created: 25/09/2023
Description: This program will find prime numbers between two intervals given by user
*/
#include <stdio.h>
#include <stdlib.h>
void PrimeNumbers(int start , int end );
int main()
{
    int start,end;
    printf("Enter two numbers(intervals): ");
    fflush(stdin);
    scanf("%d %d",&start,&end);
    fflush(stdin);
    printf("Prime numbers between %d and %d are: ",start,end);
    PrimeNumbers(start,end);
    return 0;
}
void PrimeNumbers(int start , int end ){
    int i,j;
    char flag;
    for(i=start+1 ;i<=end ;i++)
    {
        flag =0;
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                flag =1;
                break;
            }
        }
        if (flag == 0 )
            printf("%d ",i);
    }
}
