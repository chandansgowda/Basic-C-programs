                    /*The right most integral value of a number*/

#include <stdio.h>
#include <conio.h>
void main()
{
    float a;
    int b;
    a = 133.45;
    /*printf("Enter the floating point number>> ")
    scanf("%f",&a)*/
    b = (int)a%10;
    printf("The right most integral value of the number %f is %d",a,b);


}
