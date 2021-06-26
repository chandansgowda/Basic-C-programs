                                        /*Biggest of two numbers using if else statement*/

#include <stdio.h>

void main(){
    int a,b;
    printf("Enter two numbers>>");
    scanf("%d %d",&a,&b);
    if (a>b)
        printf("Number %d is greater than number %d",a,b);
    else if(b>a)
        printf("Number %d is greater than number %d",b,a);
         else
            printf("The numbers are equal");
}
