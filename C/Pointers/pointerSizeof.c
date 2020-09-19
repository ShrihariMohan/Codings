// Type is Important in C
// C is Strictly Typed 

#include <stdio.h>

void main() {
    int i = 10 ;
    double f = 10.0 ;
    char c = 'c' ;

    int * ip = &i ;
    double * fp = &f ;
    char * cp = &c ;

    printf("Varibale size\n");
    printf("%ld " , sizeof(i)); //4B
    printf("%ld " , sizeof(f)); //8B
    printf("%ld " , sizeof(c)); //1B

    printf("\n* size or Value of size\n");
    printf("%ld " , sizeof(*ip)); // 4
    printf("%ld " , sizeof(*fp)); // 8
    printf("%ld " , sizeof(*cp)); // 1

    printf("\nPointer Size\n");
    printf("%ld " , sizeof(ip)); // 8
    printf("%ld " , sizeof(fp)); // 8
    printf("%ld " , sizeof(cp)); // 8
   
    // The size of the pointer will vary from 
    // data type to data type ????? NO