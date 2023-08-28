#include<stdio.h>
#include<stdlib.h>
int main()
{
    float num1,num2;
    float result;
    char op;
    printf("Enter operator either + or - or * or / :");
    fflush(stdin);
    scanf("%c",&op);
    printf("Enter two operands:");
    fflush(stdin);
    scanf("%f %f" ,&num1,&num2);
    switch(op)
    {
        case '+':
            result=num1+num2;
            break;
        case '-':
            result=num1-num2;
            break;
        case '*':
            result=num1*num2;
            break;
        case '/':
            result=num1/num2;
            break;
        default:
            printf("Error! operator is not correct");
    }
    printf("%.2f %c %.2f = %.2f",num1,op,num2,result);
}