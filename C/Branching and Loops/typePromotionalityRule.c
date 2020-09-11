#include<stdio.h>

void main() {
    int a = 10 ;
    //sizeof return unsigned integer
    //10 -> 4B
    // 10.0 -> 8B
    // 10.0f -> 4B
    //'c' -> 1B
    // 1 B = 8 Bit = 2^ 8 = 256 ;
    //Char range 0 to 255 ;
    char c = 'c' ;
    char cd = 510 ;
    double f = 10 ;
    //0 
    // 1..
    // 2..


    // 254 -> -2
    //255 -> -1
    // 256 -> 0
    // 257 -> 1
    // 270 -> 14

    
    printf("%d ",cd);
    // printf("%d",sizeof(c));

}