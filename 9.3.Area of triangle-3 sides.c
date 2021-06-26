                  /*Area of triangle-given three sides*/


#include <stdio.h>

void main()
{
    float a,b,c,s,area;
    printf("Enter the length of the sides>> ");
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
    area = (s*(s-a)*(s-b)*(s-c))**0.5;
    printf("The area of the triangle for given sides is %f",area);

}
