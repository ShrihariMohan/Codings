#include<stdio.h>

void main() {

    int a = 10 ;
    int b = 20 ;

    int * p1 = &a ;
    int * p2 = &b ;

    a += 1 ; // 11
    b -= 1 ; // 19

    *p1 += 1 ; // 12
    *p2 -= 1 ; // 18

    printf("%d %d \n",a,b);
    printf("%d %d ",*p1,*p2);

}