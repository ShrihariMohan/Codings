/* 
    Write a program to check +ve or -ve 
    without using relational Operators
*/

#include<stdio.h>

void main() {
    short int num = 0 ; // 2 Byte = 16bit
    // +ve -> MSB = 0 
    // -ve -> MSB = 1 
    //16 bit => 
    
    if ( num >> 15) printf("Negative");
    else printf("Positive");
    
    
}