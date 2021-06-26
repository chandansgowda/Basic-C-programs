                        /*All arithmetic operators with user input*/
#include <stdio.h>

void main()
{
    float a,b,sum,prod,div,diff;
    /*a = 10;
    b = 5;*/
    printf("Enter the num1>> ");
    scanf("%f",&a);
    printf("Enter the num2(num!=0)>> ");
    scanf("%f",&b);
    sum=a+b;
    printf("The sum of %.0f and %.0f is %.0f\n",a,b,sum);
    diff=a-b;
    printf("The diff of %.0f and %.0f is %.0f\n",a,b,diff);
    prod=a*b;
    printf("The prod of %.0f and %.0f is %.0f\n",a,b,prod);
    div=a/b;
    printf("The div of %.0f and %.0f is %.2f\n",a,b,div);
}
