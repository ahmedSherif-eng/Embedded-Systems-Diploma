/*
Author: Ahmed Sherif
Created: 03/09/2023
Description: This program will insert an element at an index
*/
#include<stdio.h>
int main()
{  
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    int i,j;
    printf("Enter the elements of the array: \n");
    for(i=0;i<size;i++)
    {
        printf("Enter element a%d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Entered array:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    int index,element;
    printf("Enter the index: ");
    scanf("%d",&index);
    printf("Enter the element: ");
    scanf("%d",&element);
    for(i=size;i>=index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    printf("The array after insertion:\n");
    for(i=0;i<size+1;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}