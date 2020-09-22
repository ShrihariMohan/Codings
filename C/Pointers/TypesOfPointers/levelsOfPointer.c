// 1. & -> address of 
// 2. * -> value at that address 

#include<stdio.h>

void main() {
    int a  ; // 500
    int * ptr1  ; //600
    int * * ptr2 ; // 700
    int * * * ptr3 ; // 800

    a = 10 ;
    ptr1 = &a ; // int *
    ptr2 = &ptr1 ; // int **
    ptr3 = &ptr2 ; // int * * *

    a ; // 10
    &a ; // 500

    ptr1 ; // 500
    &ptr1 ; // 600
    *ptr1 ; // 10

    ptr2 ; // 600
    &ptr2 ; // 700
    *ptr2 ; // 500
    **ptr2 ; // 10

    ptr3 ; // 300
    &ptr3 ; // 800
    *ptr3 ; // 600
    **ptr3 ; // 500
    ***ptr3 ; // 10

    printf ("%d ",* & a) ; // 10
    printf("%d ",* & * & * & a) ; // 10

    




    


}