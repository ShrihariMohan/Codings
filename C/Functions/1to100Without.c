// Write a program to print 1 to 100 without
// using loops and if statements , conditional
// goto

//  1 && 5 => 1 or 0
#include <stdio.h>

int print(int num) {
    printf("%d ",num);
    num < 100 && print(num+1) ;
    return 0 ;
}

void main(){
    print(1);
}