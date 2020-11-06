#include<stdio.h>
#define test(a,b) a##b
void main() {
    int ab = 10 ;
    printf("%d ",test(a,b));
    int val1 = 10 , val2 = 20 , val3 = 30 ;
    printf("%d ",test(val,1+2));
}