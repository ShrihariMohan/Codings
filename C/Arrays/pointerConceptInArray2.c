/*
    Internal Implementation
    
    1. we can access the array using index operator

    2. we can access the array using pointer concepts

    3. arr[4] will be internallly converted as * ( arr + 4) ;

    4. General form arr[i] = * ( arr + i )

    5. then i [arr] will be ?  = * ( i + arr)

    6. Array name will always be converted into pointer concepts
    except when using sizeof() and & (address of)

    7. & arr or & baseAddress -> results in entire memory taken by
    arr.
*/

#include<stdio.h>

void main() {
    int arr[5] = {10, 20, 3, 4, 5} ;

    // printf("%d ",*(arr+4)); // Index of operator .
    // arr[4] = 25 ;
    // printf("%d \n",4[arr]);

    // for ( int i = 0 ; i < 5 ; i ++) {
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");

    //  for ( int i = 0 ; i < 5 ; i ++) {
    //     printf("%d ",*(arr + i));
    // }
    // printf("\n");

    //  for ( int i = 0 ; i < 5 ; i ++) {
    //     printf("%d ",*arr + i);
    // }
    // printf("\n");

    //  for ( int i = 0 ; i < 5 ; i ++) {
    //     printf("%d ",i[arr]);
    // }
    // printf("\n");

     printf("%ld ",sizeof(arr));

    printf("%p %p\n" , arr , arr +1) ;
    printf("%p %p" , &arr , &arr +1) ;

    // b0 + 4
    // b4 + 4
    // b8 + 4
    // bC + 4
    // bF + 4 = c4



   
}

