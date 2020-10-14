#include<stdio.h>

int main() {
    char s[][10] = {"EVEN" , "ODD"} ;
    int num = 11 ;
    printf("%s ",s[num%2]);
}