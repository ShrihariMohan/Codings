#include <stdio.h>
#include <limits.h>

int main() {
    int a = 10 ;
    float f = 10.0 ;
    double d = 10.0 ;
    char ch = 127 ;

    // 2 ^ 8 = 256 values
    // printf("Char Size %ld \n" ,sizeof(ch)) ; 1 Byte
    // printf(" Int Size %ld \n" ,sizeof(a)) ;
    // printf("Float Size %ld \n" ,sizeof(f)) ;
    // printf("Double Size %ld \n" ,sizeof(d)) ;

    printf("DEFAULT \n");
    printf(" min %d \n",CHAR_MIN);
    printf(" Max %d \n",ch+2);

    printf("SIGNED \n");
    printf(" smin %d \n",SCHAR_MIN-1);
    printf(" sMax %d \n",SCHAR_MAX+1);

    printf("Unsidgned \n");
    printf(" uMax %d \n",UCHAR_MAX+1);
}