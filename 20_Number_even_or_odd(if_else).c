                               /*Program to find a number is odd or even using simple if else*/

#include <stdio.h>

void main(){
    int a;
    printf("Enter the number>>");
    scanf("%d",&a);
    if (a%2 == 0)
        printf("The number %d is a even number",a);
    else
        printf("The number %d is a odd number",a);
}
