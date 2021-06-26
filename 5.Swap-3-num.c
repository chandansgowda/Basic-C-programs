               //swap 3 numbers with temp variable
#include <stdio.h>
void main()
{
    int a,b,c,temp;
    /*a=10;
    b=20;
    c=30;*/
    printf("Enter the first number(a)>>");
    scanf("%d",&a);
    printf("Enter the second number(b)>>");
    scanf("%d",&b);
    printf("Enter the third number(c)>>");
    scanf("%d",&c);

    temp=a;
    a=b;
    b=c;
    c=temp;
    printf("The values after swaping are a=%d b=%d c=%d",a,b,c);
}
