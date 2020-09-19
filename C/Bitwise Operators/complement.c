
// Bit wise Operator
/*
1. 1s Complement (~)
2. left shift ( << )
3. right shift( >> )
4. And ( & )
5. Or ( | )
6.Xor ( ^ )

*/

//1s Complement ?
//1. change all 0s to 1 and all 1s to 0


#include <stdio.h>

void main() {
    int a = 5 ; 
    printf("%d ",~a);
    // + 1
    // change sign
    
    //   0000..0101 = 5 = ( 2pow0 + 2pow2) = ( 1 + 4)
    //1. 1111..1010 = -6 ?

    //0000..0000 = 0 
    //1111..1010 = -6 

    // Signed 
    //1000 => -8
    //0111 => 7
    //1111 => -1 

    // UnSigned 
    //1000 => 8
    //0111 => 7
    //1111 => 15 

    //unsigned range positve 
    // 0 to 15 ;

    // signed range 
    // -8 to 7


    
}