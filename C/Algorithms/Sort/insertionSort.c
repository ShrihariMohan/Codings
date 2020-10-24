#include<stdio.h>

void insertionSort(int * arr , int size) {
    int key ;
    for ( int i = 1 ; i < size ; i ++) {
        key = arr[i] ;
        int j = i-1 ;
        while ( j > -1 && arr[j] > key) {
            arr[j+1] = arr[j] ;
            --j ;
        }
        arr[j+1] = key;
    }
}

void print( int * arr , int size) {
    for ( int i = 0 ; i < size ; i ++) {
        printf("%d ",arr[i]);
    }
}
void main() {
    int size = 6 ;
    int arr[] = {4 , 3 , 6 , 8 , 14 , 10} ;
    insertionSort(arr , size);
    print(arr,size);
}