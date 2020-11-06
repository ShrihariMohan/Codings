#include<stdio.h>
#include<stdlib.h>
// Allocating memory at run time is called DMA
// We re requesting heap manager to allocate memory
// success means returns address else null 

void * allocate ( size_t size) {
    int * p ;
    p = malloc ( sizeof(int) * size);
    return p ;
}
void main() {
    int * k , n ;
    k = allocate(12);
    if ( k == NULL) printf("Memory OverFlow");
    else printf("Created");

}