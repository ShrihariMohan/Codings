// 3 things 
//1. Call by Value
//2. Call by address 
//3. Call by reference



#include <stdio.h>


void swap ( int *a , int *b ) {
    int temp = *a ;
    *a = *b ;
    *b = temp ;

}


void main() {
    int a = 10 ;
    int b = 20 ;

    printf("Before Swapping\n");
    printf("%d %d\n\n",a,b);

    swap ( &a , &b) ;

    printf("After Swapping\n");
    printf("%d %d\n",a,b);

}