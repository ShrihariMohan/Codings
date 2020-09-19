#include <stdio.h>


void test() {
    here:
    printf("Inside function");
}
void main() {
    int a = 20 ;
    goto here;

    {
        here :
        printf("Inside Block");
    }

    
}