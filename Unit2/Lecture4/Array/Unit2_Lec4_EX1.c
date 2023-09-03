/*
Author: Ahmed Sherif
Created: 03/09/2023
Description: This program will find the sum of two dimensional array
*/
#include<stdio.h>
int main()
{
    float arr[2][2],b[2][2],sum[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter the value of a[%d][%d]: ",i,j);
            scanf("%f",&arr[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("Enter the value of b[%d][%d]: ",i,j);
            scanf("%f",&b[i][j]);
        }
    }
    printf("The sum of the two matrices is: \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sum[i][j]=arr[i][j]+b[i][j];
            printf("%.1f\t",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}