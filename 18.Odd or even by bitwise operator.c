                      /**/

#include <stdio.h>

void main(){
    int a;
    printf("Enter the number>>");
    scanf("%d",&a);
    (a&1 == 1)? printf("The number %d is a odd number",a):printf("The number %d is a even number",a);
}
