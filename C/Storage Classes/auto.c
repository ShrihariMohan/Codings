// Default Storage class for loc var is Auto

// Allowed storage classes for loc variable is 
// auto , static , extern , register .

// For Parameters Only allowed is register only.

#include <stdio.h>
// static int count = 0 ;

int f ( int n) {
    int l ;
    int num = 20 ;
    printf("%d ",num);
    // if ( num <= 0) return 1 ;
    // l = num * f( num-1) ;
    // printf("%d ",l);
    return l ; // Not executed
}



void main() {
    int num = 10 ;
    printf("%d ",num);
    register int a ; // 0
    // a = f(3) ;
    // printf("%d ",a);
    f(3);
   
}







/*
*/