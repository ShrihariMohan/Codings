// Write a c program to find even or odd 
// without using arithmetic operators

#include<stdio.h>

void main() {
     int num = +13 ;
     int anotherNUm = -13 ;
    //1 ->00000000000000000000000000000000010010001
    // 2-> 00000000000000000000000000000000000000010
    //3 -> 11
    // 4-> 100
    //5 -> 101
   // 8-> 1000
   // 1-> 00000000000000000000000000000000000000000001
   
   if ( num & 1) printf("Odd");
   else printf("Even");
   }