                    /*Biggest/smallest of two numbers using ternary operator*/


#include <stdio.h>

void main(){
    int a,b,big;
    printf("Enter two numbers>>");
    scanf("%d %d",&a,&b);
    big = (a>b)? a:b;
    printf("The biggest number among %d and %d is %d",a,b,big);
}
