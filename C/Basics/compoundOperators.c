#include<stdio.h>

void main() {
    int i = 50 ;
    float f = 69.0 ;
    int avgSalOfTechBoy = 10 ;
    avgSalOfTechBoy += 10 ;
    // Arithmetic Operators 

    i += 10 ; // i = i + 10 ;
    printf("%d ",i); // 60

    f -= 10.0 ; // f = f - 10.0 ;
    printf("%f ",f); // 59.000000


    i *= 2 ; // i = i * 2 ;        
    printf("%d ",i); // 120

    // f %= 5.0 ; // f = f % 5.0 ; 
    // printf("%f ",f); // CE

    i /= 2 ; // i = i / 2  ;
    printf("%d ",i); // 60


    

    //Bitwise Operators 
    i <<= 2 ; // i = i << 2 ;
    printf("%d ",i); //240

    i &= 1 ; // i = i & 1 ;
    printf("%d ",i); // 0

    i |= 1 ; // i = i | 1 ;
    printf("%d ",i); // 1

    i >>= 2 ; // i = i >> 2 ;
    printf("%d ",i); // 0

    i^= 1 ;

    //bitwise except 1s COmplement

    








}