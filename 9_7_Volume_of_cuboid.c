              /*Volume of a cuboid*/

#include <stdio.h>
#include <conio.h>

void main(){
    float l,b,h,vol;
    l = 5;
    b = 4.5;
    h = 3.0;

    /*printf("Enter the length of the cuboid>> ");
    scanf("%f",&l);
    printf("Enter the breadth of the cuboid>> ");
    scanf("%f",&b);
    printf("Enter the height of the cuboid>> ");
    scanf("%f",&h);*/

    vol = l*b*h;
    printf("The area of the cuboid with length %.2f,breadth %.2f and height %.2f is %.2f",l,b,h,vol);
}
