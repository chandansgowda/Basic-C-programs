//1 - x2/2! + x3/3! - x4/4! -- Cos Series
#include <stdio.h>
#include <math.h>
void main()
{
    int n=10,fact=1,sign=-1;
    float x=60,sum;
    x = (x/180)*3.14;
    sum = 1;
    for(int i=2;i<n;i+=2)
    {
        fact = fact*i*(i-1);
        sum = sum + sign*pow(x,i)/fact;
        sign *= -1;
    }
    printf("%f", sum);
}
