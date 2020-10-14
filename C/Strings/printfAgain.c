#include<stdio.h>
#include<string.h>

int main() {
    char * str = "Shrihari %d Great" ;
    printf("%s \n", str);
    printf(str , 69);
    printf("\n");
    printf("%s \n", str + 2);
    printf("%s ", "helloWorld" + 2);
}

/*
    there is a differece 
    first args respects format specifier 
    other args dont respect format specifier.
*/