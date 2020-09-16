// Write a program to print 1 to 100 without
// using loops 

#include<stdio.h>

void main() {

   //1. 100 printf
   //2. using goto

   int x = 1 ;
   here: 
   printf("%d ",x);
   x = x+1 ;
   if ( x <= 100 ) goto here; 
}