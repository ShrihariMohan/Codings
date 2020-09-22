#include<stdio.h>

void * getValueFromFun( int choice) {
    

    if ( choice == 0) {
        static int a = 69;
        return &a ;
    }

    if ( choice == 1) {
        static char c = 69 ;
        return &c ;
    }

    if ( choice == 2) {
        static double d = 69.6969 ;
        return &d ;
    }


}

void main() {


    void * ptr ;
   

    ptr = getValueFromFun(0);
    printf("%d ",*(int *)ptr);

    ptr = getValueFromFun(1);
    printf("%c ",*(char *)ptr);

    ptr = getValueFromFun(2);
    printf("%f ",*(double *)ptr);


    printf("%p\n",ptr);
    printf("%p\n",ptr+1);
    printf("%p\n",ptr+2);

}

/*
    1. Void pointer is a generic pointer
    2. Capable of pointing to any address 
    3. Whenever we're dealing with address that
    we dont know the type then we use void pointer
*/
