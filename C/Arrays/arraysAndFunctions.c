#include<stdio.h>

void print1d(int * arr) {
    for ( int i = 0 ; i < 5 ; i ++) {
        printf("%d ",arr[i]);
    }
}

void print2d(int col , int arr[][col]) {
    for ( int i = 0 ; i < 2 ; i ++) {
        for ( int j = 0 ; j < 2 ; j ++) {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

void main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[2][2] = {1, 2, 3, 4} ;
    print2d(2,b);
}

/*
    is it possible to pass an entire array as an arg ? No
    1d - point
    2d - 1 dim array
    3d - 2 dim array

    All static and global arrays should be initialized with const expressions
    what are const expressions  ?
    Constants
    static var address
    global var address 
    const expression 10 , 20 like this.
*/