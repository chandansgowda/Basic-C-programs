                   /*Swap 2 numbers with temp variable*/
#include <stdio.h>
void main()
{
    int a,b,temp;
    a = 10;
    b = 5;
    /*printf("Enter the first number(a)>> ");
    scanf("%d",&a);
    printf("Enter the second number(b)>> ");
    scanf("%d",&b);*/
    temp = a;
    a = b;
    b = temp;
    printf("The values of a and b are %d and %d respectively",a,b);

}
