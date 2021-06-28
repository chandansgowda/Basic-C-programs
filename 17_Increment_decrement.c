                                    /*increment/decrement operator*/

#include <stdio.h>

void main(){
    int a,b,x,y,pre_in,pos_dec,pos_in,pre_dec;
    printf("Enter two number>>");
    scanf("%d %d",&a,&b);

    x = a;
    y = b;

    pre_in = ++a;
    printf("\nThe pre-increment of the given number %d is %d\n",x,pre_in);

    pos_in = a++;
    printf("The post-increment of the given number %d is %d\n",x,pos_in);

    pre_dec = --b;
    printf("The pre-decrement of the given number %d is %d\n",y,pre_dec);

    pos_dec = b--;
    printf("The post-decrement of the given number %d is %d\n",y,pos_dec);
}
