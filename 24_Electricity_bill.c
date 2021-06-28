                                /*Electricity Bill*/

#include <stdio.h>
#define SLAB1 82.5
#define SLAB2 192.5
#define SLAB3  367.5

void main(){
    int present_read,previous_read,diff,RR,Acc,MR;
    float bill_amt;
    previous_read = 0;
    printf("Enter the RR No.");
    scanf("%d",&RR);

    printf("Enter the Acc Id:");
    scanf("%d",&Acc);

    printf("Enter the M.R Code:");
    scanf("%d",&MR);

    printf("Enter the present reading of the meter:");
    scanf("%d",&present_read);


    printf("                                                  BESCOM                                              \n");
    printf("----------------------------------------------------------------------------------------------------------\n");
    printf("                        RR No       :                                   %d\n",RR);
    printf("                        Acc Id      :                                   %d\n",Acc);
    printf("                        M.R Code    :                                   %d\n",MR);
    printf("----------------------------------------------------------------------------------------------------------\n");
    printf("                        Present reading of the meter:                   %d Unit\n",present_read);
    printf("                        Previous reading of the meter:                  %d Unit\n",previous_read);
    diff = present_read - previous_read;
    printf("----------------------------------------------------------------------------------------------------------\n");
    if (diff<=50){
        bill_amt = diff*1.65;
        printf("                        Bill amount                                     %.2fRs",bill_amt);
        previous_read = present_read;
    }
    else if (diff<=100){
        bill_amt = SLAB1 + (diff-50)*3.85;
        printf("                        Bill amount                                     %.2fRs",bill_amt);
        previous_read = present_read;
    }
        else if (diff<=150){
        bill_amt = SLAB1 + SLAB2 + (diff-100)*7.35;
        printf("                        Bill amount                                     %.2fRs",bill_amt);
        previous_read = present_read;
    }
            else if (diff>150){
            bill_amt = SLAB1 + SLAB2 + SLAB3 + (diff-150)*11.75;
            printf("                        Bill amount                                     %.2fRs",bill_amt);
            previous_read = present_read;
    }
}
