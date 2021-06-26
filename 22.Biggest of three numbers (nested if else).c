                                /*Program to find the biggest of three numbers using nested if else statements*/

#include <stdio.h>

void main(){
    int a,b,c;
    printf("Enter three number>>");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b)
        if (a>c)
            printf("Number %d is the biggest among %d,%d and %d",a,a,b,c);
        else
            printf("Number %d is the biggest among %d,%d and %d",c,a,b,c);
    else
        if (b>c)
        printf("Number %d is the biggest among %d,%d and %d",b,a,b,c);
        else
            printf("Number %d is the biggest among %d,%d and %d",c,a,b,c);
}

