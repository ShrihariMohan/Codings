#include<stdio.h>
// p is a intger pointer that will point a integer

// & -> address of operator

// * -> value

// int * will store int address ;

void main() {
    int a = 10 ; //500
    int * p  ;
    p = &a ;
    *p = 40 ;
    printf("%d ",a);
    printf("%d ",*p);

}