/*
Author: Ahmed Sherif
Created: 03/09/2023
Description: This program will search for an element in unsorted array using linear search
*/
#include<stdio.h>
int main()
{  
    int n, i, key, flag=0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    for(i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            printf("Element found at index %d", i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Element not found");
    }
    return 0;
}