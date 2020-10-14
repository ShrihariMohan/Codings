#include<stdio.h>

void main() {
    char s[][15] ={"a is greater", "b is greater"};
    int a = 30 ;
    int b = 20 ;

    printf("%s ",s[b>a]);
}