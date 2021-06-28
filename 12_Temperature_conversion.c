                                /*Program to convert celsius to fahrenheit and vise-versa*/

#include <stdio.h>

void main(){
    float celsius,fahrenhiet;
    printf("Enter the temperature in celsius>> ");
    scanf("%f",&celsius);
    fahrenhiet = ((9.0/5.0)*celsius)+32;
    printf("The value of %.2fC in fahrenhiet is %.2fF\n",celsius,fahrenhiet);

    printf("Enter the temperature in fahrenhiet>> ");
    scanf("%f",&fahrenhiet);
    celsius = (fahrenhiet - 32)/1.8;
    printf("The value of %.2fF in celsius is %.2fC",fahrenhiet,celsius);
}

