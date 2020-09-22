#include <stdio.h>

void main() {

    int i = 10;
    double f = 10.0;
    char c = 'c';

    int *ip = &i;   // 500 -> 1 Byte
    double *fp = &f; // 600 -> 1 bye
    char *cp = &c;  // 700 -> 1 byte

    i += 1 ; // 11
    f += 1 ; // 11.000000
    c += 1 ; // 'd' ;
    
    ip += 10 ; // 540
    fp += 10 ; 
    cp += 10 ; 

}