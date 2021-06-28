                               /*Program to find a number is positive/negative/zero using simple if else*/

#include <stdio.h>

void main(){
    int a;
    printf("Enter the number>>");
    scanf("%d",&a);
    if (a>0)
        printf("The number %d is a positive number",a);
    else if(a<0)
        printf("The number %d is a negative number",a);
        else
            printf("The number is equal to zero");
}
