                    /*Separate integral and decimal parts of a number*/

#include <stdio.h>

void main()
{
    float a,decimal_val;
    int whole_num;
    //a = 4.73
    printf("Enter the number>> ");
    scanf("%f",&a);
    whole_num = a;
    decimal_val=a - whole_num;
    printf("The integral part and decimal part of %.4f are %d and %.3f respectively",a,whole_num,decimal_val);
}
