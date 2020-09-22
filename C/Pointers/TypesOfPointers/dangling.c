
/*
    Dangling Pointer
1. A pointer which is pointing to the dead
   Memory Location

2. or pointer pointing to the location 
   which is no longer exist.      
*/
#include<stdio.h>

int *  getValueFromFun() {
      int value = 20 ;
     return &value ;
}

void main() {
    int a ;
    int * ptr ;
    ptr = getValueFromFun() ;
    a = *ptr ;
    printf("%d ",a); // 20 
}