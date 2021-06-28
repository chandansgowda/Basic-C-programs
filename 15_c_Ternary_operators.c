                        /*To check whether the given number is positive or negative*/

#include <stdio.h>

void main(){
    int a;

    printf("Enter the number>>");
    scanf("%d",&a);
    (a>0)?
    (printf("The entered number %d is a positive number",a)):
        ((a<0)?
         (printf("The entered number %d is a negative number",a)):
         (printf("The number is zero"))
         );
}
