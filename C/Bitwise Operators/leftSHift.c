#include<stdio.h>

//1. remove left side bits
//2. add 0s to the right.
void main() {

    int a = 10; 
    // 000000...00101000 = 40; 
    a = a << 2 ;

    int sum = 20 << 3 ;
    printf("%d", a);

    
    // simple technique
    // left * ( 2 power right )
    // 100 * ( 2 power 3 )
    // -5 * ( 8)
}