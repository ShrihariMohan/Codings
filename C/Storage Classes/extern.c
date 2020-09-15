/* 
    Default global variable will be extern .
    Allowed class is Static and extern 

    default class for funtion is extern
    allowed is static and extern

    extern is allowed only in global

*/

#include <stdio.h>
 extern int a;
a = 10 ;

void main(){
 
    printf("hello World");
    printf("%d ",a);
}

