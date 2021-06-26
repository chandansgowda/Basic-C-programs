                    /*Volume of prism*/

#include <stdio.h>
#include <conio.h>

void main(){
    float b,h1,h2,vol,area;
    b = 5;
    h1 = 5;     //base triangle height
    h2 = 5;     //prism height
    /*printf("Enter the base length of triangle>> ");
    scanf("%f",&b);
    printf("Enter the base height of triangle>> ");
    scanf("%f",&h1);
    printf("Enter the height of triangle>> ");
    scanf("%f",&h2);*/

    area = (0.5)*b*h1;
    vol = area*h2;
    printf("The area of the prism with base triangle length %.2f,height of base triangle %.2f and prism height %.2f is %.2f",b,h1,h2,vol);


}
