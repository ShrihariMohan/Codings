#include <stdio.h>

int a ; // BSS or uninitialized data 
int b =10 ; // Data Segment or DS
static int c ; // BSS
static int d = 10 ; // DS

int sum( int a , int b) // stack {
    return a + b ; // stack
}

void main() {
    static int e ; // BSS
    static int f = 20 ; // DS
    int g = 20 ; // stack
    int h ; // stack
    h = 50 ; // CS
    int result ; // stack
    result = sum ( a + b); // stack + cs ;
}