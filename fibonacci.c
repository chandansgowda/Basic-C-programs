//0 1 1 2 3 5 8 13 - Fibonacci Sequence
#include <stdio.h>
void main(){
    int i,n=15;
    int t1=0,t2=1;
    printf("%d %d",t1,t2);
    int nextTerm = t1+t2;
    for(i=3;i<n;i++){
        printf(" %d ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}
