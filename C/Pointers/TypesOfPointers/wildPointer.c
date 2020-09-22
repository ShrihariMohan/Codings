#include<stdio.h>

void main() {
    int a ;
    int * p  ;
    a = 10 ;
    *p = 20 ;

    printf("%d ",*p);
}
// Wild Pointer

//1. A Pointer WHich is pointing to the memory Location
// That is not reserved by a programmer .

//2. If you try to update the values in the unreserved
// location you will get run time error 

//3. Segmentation fault ( core dumped )

//4. Make sure Always make the pointer to point a 
// reserved memory.

//5. Always initialize the pointer by address not by number
