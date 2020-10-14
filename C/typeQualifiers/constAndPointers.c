#include<stdio.h>

void main() {
    const int id = 10 ;
    int * ptr = & id ;
    * ptr = 888 ;
    printf("%d ",id);   
}