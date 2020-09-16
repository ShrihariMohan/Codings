#include<stdio.h>
#include<stdlib.h>

void test() {
    printf("4");
    exit(25); 
   printf("5");
}

void main() {
    printf("1");
    printf("2");
    test();
    printf("3");
}

/*
    1. Exit - terminate current process
    2. Hand the error code to the parent
    3. OS is the parent


    1. Network Connection 
    2. Open DataBAse
    3. Update Details

    if ( NC fails) exit(0) ;
    if ( database fails) exit(1);
*/