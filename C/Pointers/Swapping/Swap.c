#include <stdio.h>

void main() {
    int a = 10 ;
    int b = 20 ;

    printf("Before Swapping\n");
    printf("%d %d\n\n",a,b);

    int temp = a ;
    a = b ;
    b = temp ;

    printf("After Swapping\n");
    printf("%d %d\n",a,b);

}