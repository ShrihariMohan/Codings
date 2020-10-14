#include<stdio.h>
#include<string.h>

void main() {
    char * s = "helloworld" ;  
    int a = 10 ;
    char sa[10] = {'s','h','r','i','\0'};
    printf(sa);
}

/*
    "shrihari" -> converted to address 
    char * or char a[10] can be used ;
    char * doesnt need null character
    when using this char a[10] = {} null should be mentioned else left and right.
*/