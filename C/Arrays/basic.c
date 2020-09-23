/*
 Arrays is a index based collection of homogennous elements
 Whenever we require n variable of same type we use arrays.
*/

#include<stdio.h>

void main() {

    int SIZE = 10 ;
    int arr[SIZE] ; // VALID gcc

    // int arr100[10] ;
    // int arr20[10+5] ;
    // int arr1000[5.3] ; // invalid
    // int arr40[] ; // invalid
    // int arr['E'] ; 

    // Types of assigning values in an array
    //1. using index
    arr[0] = 10 ;
    arr[1] = 20 ;
    arr[2] = 30 ;
    arr[3] = 40 ;
    arr[4] = 50 ;
    arr[100] = 60 ; // Valid 
    // Boundary check is not in arrays.

    

    //2. using {} initialization
    int anotherArr[5] = {100 , 200 , 300 , 400 , 500} ;
    int arr2[5] = {100 , 200 , 300} ;
    int arr3[] = {10 , 20 , 40} ;

    // int arr4[5] ;
    // arr4[5] = {1 , 2 , 3} ;

    // int arr5[3] = { 1, 2, 3, 4 };
}

/*                   Arrays or Static Arrays
    
    0. There is no boundary check.

    1. {} -> can only be used for initialization means
    cannot be used for assignment.

    2. size is optional when intializing .
       compiler automatically calculate the size. 

    3. size is must for declaration.

    4. Whenever a array is filled partially, remaining 
       elements will be 0. 

    5. Size cannot be changed during run time.   

*/