#include <stdio.h>

void main() {
    int a = 10 ;
    int b = 20 ;

    printf("Before Swapping\n");
    printf("%d %d\n\n",a,b);

    a = a + b ; //a = 30
    b = a - b ; // b = 10
    a = a - b ; // a = 20

    printf("After Swapping\n");
    printf("%d %d\n",a,b);

}