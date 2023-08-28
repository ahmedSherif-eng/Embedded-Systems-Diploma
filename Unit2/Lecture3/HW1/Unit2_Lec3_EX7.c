#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a, b, temp;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("\nEnter value of b: ");
    scanf("%d",&b);
    a^=b;
    b^=a;
    a^=b;
    printf("\nAfter swapping, value of a = %d",a);
    printf("\nAfter swapping, value of b = %d",b);
    return 0;
}