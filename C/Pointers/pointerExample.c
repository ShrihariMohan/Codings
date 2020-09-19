#include<stdio.h>

void main() {
    int a = 10 ;
    int b = 20 ;

    int * p1 = &a ; // Integer pointer
    int * p2 = &b ;

    *p1 = 30 ;
    p1 = p2 ;
    *p1 = 40 ;

    printf("%d %d \n", a , b);
    printf("%d %d",*p1,*p2);


}