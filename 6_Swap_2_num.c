                     /*Swap 2 numbers without temp variable*/
#include <stdio.h>
void main()
{
    int a,b;
    a = 10;
    b = 20;
    /*printf("Enter the first number(a)>> ");
    scanf("%d",&a);
    printf("Enter the second number(b)>> ");
    scanf("%d",&b);*/
    a = a+b;
    b = a-b;
    a = a-b;
    printf("The value are a=%d and b=%d",a,b);
}
