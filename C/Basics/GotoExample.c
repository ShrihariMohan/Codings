#include <stdio.h>

void main() {
    int a = 20 ;
    goto here;
    {
         here :
        int a = 10  ;                

        printf("%d ",a);
    }
    a;
}