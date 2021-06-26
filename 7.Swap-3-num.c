                   /*Swap three numbers without temp variable*/
#include <stdio.h>
void main()
{
    int a,b,c;
    a = 10;
    b =20;
    c = 30;
     /*printf("Enter the first number(a)>> ");
    scanf("%d",&a);
    printf("Enter the second number(b)>> ");
    scanf("%d",&b);
    printf("Enter the third number(c)>> ");
    scanf("%d",&c);
    */
    a = a+b+c;
    b = a-b-c;
    c = a-b-c;
    a = a-b-c;
    printf("The swapped values are a=%d b=%d c%d",a,b,c);
}
