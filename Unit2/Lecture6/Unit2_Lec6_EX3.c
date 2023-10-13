/*
Author: Ahmed Sherif
Created: 13/10/2023
Description:  C Program to Add Two Complex Numbers by Passing Structure to a
Function
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Scomplex add(struct Scomplex x,struct Scomplex y);
struct Scomplex
{
    float real;
    float imaginary;
};
int main() {
    struct Scomplex result,x,y;
    printf("for 1st complex number\n");
    printf("Enter real and imaginary respectively :");
    scanf("%f",&x.real);
    scanf("%f",&x.imaginary);
     printf("for 2nd complex number\n");
    printf("Enter real and imaginary respectively :");
    scanf("%f",&y.real);
    scanf("%f",&y.imaginary);
    result = add(x,y);
    printf("Sum = %.1f+%.1fi",result.real,result.imaginary);
    return 0;
}
struct Scomplex add(struct Scomplex x,struct Scomplex y){
 struct   Scomplex    result;
    result.real=x.real+y.real;
    result.imaginary=x.imaginary+y.imaginary;
    return result;
}
