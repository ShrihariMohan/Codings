#include<stdio.h>

void main() {
    /* 
    1.Bitwise AND OPerator 
        & Operator
    returns 1 if both are 1 else 0 . 

    5 -> 000..0101
    10-> 000..1010
    res= 000..0000 = 0 ;

    5 -> 000..0101
    7 -> 000..0111
    res= 000..0101 = 5 ;

    printf("%d",5 & 7);
    printf("%d",5 & 7);


    2. Bitwise OR Operator
        | Operator
    return 1 if any bit is one else 0 ;     
    5 -> 000..0101
    10-> 000..1010
    res= 000..1111 = 15 ;

    5 -> 000..0101
    7 -> 000..0111
    res= 000..0111 = 7 ;

    printf("%d",5 | 7);
    printf("%d",5 | 7);

    3. Bitwise XOR Operator
        ^ operator
    5 -> 000..0101
    10-> 000..1010
    res= 000..1111 = 15

    5 -> 000..0101
    7 -> 000..0111
    res= 000..0010 = 2 ; 

    printf("%d",5 ^ 7);
    printf("%d",5 ^ 7);



    *** Important Things to Know ***

    x & 0 -> 0
    x & 1 -> x

    x | 0 -> x
    x | 1 -> 1 
    
  
    */

    printf("%d ",5 ^ 10);
    printf("%d ",5 ^ 7);

   


}