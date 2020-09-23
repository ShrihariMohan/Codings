#include<stdio.h>

void main() {
    int arr[5] = {1, 2, 3, 4, 5}; //2. / & -> 500 + 1 -> 504

    int * ptr ;
    ptr = arr ; //1. 5.

    // printf("%p\n",ptr); 
    printf("%d\n",*arr);//3. 4.

    ptr = ptr + 1 ;

}

/*      Pointer Concept in Arrays Part 1

    1. arr is an integer pointer 

    2. arr is a special integer pointer

    3. arr is also called as base address or starting address

    4. arr contains 1st element address 

    5. arr is int * type

    6. For every array there is a hidden pointer , its name
    is as same as the array name

    7. Special pointer or Hidden pointer or base address
    its value cannot be changed .

    8. Array name will always point to the first element
    if we 're trying to change that, then we re going to get CE

*/