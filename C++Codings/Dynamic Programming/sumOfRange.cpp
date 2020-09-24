#include<iostream>
using namespace std ;
const int size = 6 ;
int sumUntil[size] ;

void fillSumUntil( int *arr) {
    sumUntil[0] = arr[0] ;
    for ( int i = 0 ; i < size ; i ++) {
        sumUntil[i] = sumUntil[i-1] + arr[i];
    }
}

int rangeSum ( int i , int j) {
    if ( i == 0) return sumUntil[j];
    else return sumUntil[j]-sumUntil[i-1] ;
}
int main() {
    int arr[size] = {0, 1, 2, 3, 4, 5};
    fillSumUntil(arr) ;
    cout << rangeSum(2,5) ;
    return 0 ;

}