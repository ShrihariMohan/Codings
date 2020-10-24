#include<stdio.h>
void print( int * arr , int size) {
    for ( int i = 0 ; i < size ; i ++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void merger ( int * arr , int start , int mid , int end ) {
    int leftSize = mid - start + 1 ;
    int rightSize = end - mid ;

    int leftArr[leftSize] ;
    int rightArr[rightSize] ;

    for ( int i = 0 ; i < leftSize ; i ++) 
        leftArr[i] = arr[start+i];

    for ( int i = 0 ; i < rightSize ; i ++) 
        rightArr[i] = arr[mid+i+1] ;

    int li = 0 ;
    int ri = 0 ;
    int i = start ;
    while (li < leftSize && ri < rightSize) {
        if ( leftArr[li] > rightArr[ri]) arr[i] = rightArr[ri++] ;
        else arr[i] = leftArr[li++] ;
        i ++ ;
    }
    while ( li < leftSize) arr[i++] = leftArr[li++];
    while ( ri < rightSize) arr[i++] = rightArr[ri++];    
}
void mergeSort(int * arr , int start , int end ) {
    int mid ;
    if ( start < end) {
        mid = (start + end) / 2 ;
        mergeSort( arr , start , mid);
        mergeSort(arr , mid+1 , end);
        merger ( arr , start , mid , end);
    }
}


void main() {
    int size = 7 ;
    int arr[] = {4 , 3 , 6 , 8 , 15, 10 , 2} ;
    mergeSort ( arr , 0 , size-1);
    print(arr,size);
}