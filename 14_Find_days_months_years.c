                          /*Program to find the number of years,months and days for the given input of days*/

#include <stdio.h>

void main(){
    int in_days,days,months,years;
    printf("Enter the number of days>>");
    scanf("%d",&in_days);
    years = in_days/365;
    months = (in_days % 365)/30;
    days = (in_days % 365)%30;
    printf("There are %d year(s):%d months(s):%d day(s) for %d days",years,months,days,in_days);
}
