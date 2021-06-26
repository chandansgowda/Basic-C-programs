                      /*Volume of a circle*/

#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14
void main(){
    float r,vol;
    r = 5;
    /*printf("Enter the radius of the sphere>> ")
      scanf("%f",&r)*/

    vol =(4.0/3.0)*PI*r*r*r;
    printf("The volume of sphere with radius %f is %f",r,vol);
}
