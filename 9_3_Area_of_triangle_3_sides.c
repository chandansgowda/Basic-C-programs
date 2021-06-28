                  /*Area of triangle-given three sides*/


#include <stdio.h>
#include <math.h>
void main()
{
    float a,b,c,s,area;
    printf("Enter the length of the three sides of triangle>> ");
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle for given sides is %f",area);

}
