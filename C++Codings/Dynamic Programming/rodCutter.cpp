/*
Given a rod of length n inches and an array of prices 
that contains prices of all pieces of size smaller than n. 
Determine the maximum value obtainable by cutting up the rod and 
selling the pieces. 

For example, if length of the rod is 8 and 
the values of different pieces are given as following,
 1   5   8   9  10  17  17  20

then the maximum obtainable value is 22 
(by cutting in two pieces of lengths 2 and 6) 
*/

#include<iostream>
using namespace std ;

int maximumOf(int a , int b) {
    if ( a > b) return a ;
    else return b ;
}

int rodCutter( int * cost , int size) {

    int rod[size+1] ;
    rod[0] = 0 ;
    for ( int i = 1 ; i < size ; i ++) {
        int max = -1 ;
        for ( int j = 1 ; j <= i ; j ++) {
            max = maximumOf(max , cost[j] +  rod[i-j]);
        }
        rod[i] = max ;
    }
    return rod[size-1];
}

int main() {
    int size = 9 ;
    int arr[size] = { 0, 1, 5, 8, 9, 10, 17, 17 ,20 } ;
    cout << rodCutter( arr , size) ;
    return 0 ;
}