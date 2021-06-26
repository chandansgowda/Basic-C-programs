                       /*Area of circle*/
#include <stdio.h>
#define PI 3.14
void main()
{
    float radius,area;
    /*radius = 10;*/
    printf("Enter the radius>> ");
    scanf("%f",&radius);
    area = PI*radius*radius;
    printf("Area of circle for given radius %f is %f",radius,area);
}
