// Whenever we use malloc you should always free the memory after using
// else there will be memory leak 
// Dont destroy the pointer unless it is freed else you cannot free memory leakage

#include<stdio.h>
#include<stdlib.h>

void main () {
    int * p ;
    int a = 10 ;
    int * ptr = &a ;
    p = malloc(sizeof(int));
    *p = 297 ;
    printf("%d ",*p);
    free(p);
    // free (ptr);
    printf("%d ",*p); // GV
     // free(p); // RTE : DOUBLE FREE ERROR
}

// Since the compiler doesnot allocate it does not de allocate
//hence the concept of free in c program
// Free can only free the user allocated memory not the compiler allocated memory
