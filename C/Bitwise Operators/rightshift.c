#include <stdio.h>

//1. remove right side bits
//2. add msb to the right.
void main() {

    int a = 10 ;
    int power = 2 ;

    // 1111111111...0010 ; 

    printf("%d ",a >> power);

    //12 > 11 / 4 = 2  , -12 < -11/4

    // simple technique
    // +ve  left / 2 power of right
    //-ve    ~ (+left / 2 power of right)
    //only when not divisible

    // 2* 4 = 8 < 11
    // -3*4 = -12 < -11

}