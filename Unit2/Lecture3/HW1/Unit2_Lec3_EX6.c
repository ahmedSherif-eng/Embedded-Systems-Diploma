#include <stdio.h>
#include <stdlib.h>
int main()
{
   float a, b, temp;
    printf("Enter value of a: ");
    scanf("%f",&a);
    printf("\nEnter value of b: ");
    scanf("%f",&b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping, value of a = %f",a);
    printf("\nAfter swapping, value of b = %f",b);
    return 0;
}
