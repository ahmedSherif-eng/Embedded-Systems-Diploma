/*
Author: Ahmed Sherif
Created: 03/09/2023
Description: This program will find the transpose of a matrix
*/
#include<stdio.h>
int main()
{  
    int row,col;
    printf("Enter rows and columns for matrix: ");
    scanf("%d%d",&row,&col);
    int arr[row][col];
    int trans[col][row];
    int i,j;
    printf("Enter Element of matrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter element a%d%d: ",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
    printf("-------------------------------------------------\n\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            trans[j][i]=arr[i][j];
        }
        printf("\n");
    }
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}