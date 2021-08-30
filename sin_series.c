// x - x3/3! + x4/4! - x5/5!
#include <stdio.h>
#include <math.h>
void main()
{
    int n=10,fact=1,sign=-1;
    float sum,x=30;
    x = (x/180)*3.14;
    sum = x;
    for(int i=3;i<n;i=i+2)
    {
        fact = fact*i*(i-1);
        sum = sum+sign*pow(x,i)/fact;
        sign *= -1;
    }
    printf("%f", sum);
}
