#include <stdio.h>
#include <limits.h>

void main() {
    float f = 10.0 ;
    double d = 10.0 ;
    char ch = 'a' ;

    // 2 ^ 8 = 256 values
    // printf("Char Size %ld \n" ,sizeof(ch)) ; 
    // printf(" Int Size %ld \n" ,sizeof(a)) ;
    // printf("Float Size %ld \n" ,sizeof(f)) ;
    // printf("Double Size %ld \n" ,sizeof(d)) ;

    // printf("DEFAULT \n");
    // printf(" min %d \n",CHAR_MIN);
    // printf(" Max %d \n",CHAR_MAX);

    // printf("SIGNED \n");
    // printf(" smin %d \n",SCHAR_MIN);
    // printf(" sMax %d \n",SCHAR_MAX);

    // printf("Unsidgned \n");
    // printf(" uMax %d \n",UCHAR_MAX);

    // printf("INT_MAX     :   %d\n", INT_MAX);
    // printf("INT_MIN     :   %d\n", INT_MIN-12)
    
    short a = 1 ;

    while ( a++) {
        printf("hello");
    }
    printf("\n");
    printf("end");
}