                             /*Roots for quadratic equations*/


#include <stdio.h>
#include <math.h>
void main(){

    float a,b,c,root1,root2,disc;
    INPUT:
    printf("Enter the 3 co-efficients of the quadratic equation>>");
    scanf("%d %d %d",&a,&b,&c);
    if (a*b*c == 0){
        printf("Invalid input!!!...");
        goto INPUT;
    }
    disc = (b*b)-(4*a*c);
    if (disc<0)
        printf("\nThe roots are imaginary\n");
    else if(disc=0){
        root1 = -b/(2*a);
        root2 = -b/(2*a);
        printf("The roots for the given quadratic equation are %f and %f\n",root1,root2);
        printf("The roots are real and equal\n");
    }

    else{
        root1 = (-b/(2*a)) + (sqrt(disc)/(2*a));
        root2 = (-b - sqrt(disc))/(2*a);
        printf("The roots for the given quadratic equation are %f and %f\n",root1,root2);
        printf("The roots are real and distinct\n");

    }
}
