/*

1 . Addition        p1 + p2 NOt valid
3. Multiplication   p1 * p2 Not valid
4. division         p1 / p2 Not valid
5. Modulus          p1 % p2 Not valid

All relational operators are valid .
2. Subtraction      p1 - p2 Valid

*/

#include<stdio.h>

void main() {

    int a = 10 ;
    int b = 20 ;
    int * ip1 = &a; 
    int *ip2 = &b;
    printf ("%ld" ,ip2-ip1);    
}