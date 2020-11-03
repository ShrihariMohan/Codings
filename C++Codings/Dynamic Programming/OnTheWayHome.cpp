/*
The problem is to count all the possible 
paths from top left to bottom right of a mXn 
matrix with the constraints that 
from each cell you can either move only to 
right or down


*/


#include <iostream>
using namespace std ;
const int row = 4 ;
const int col = 4 ;
int mat[row][col] = {0} ;

void displayDP(  ) {
    for ( int i = 0 ;  i < row ; i ++ ) {
        for ( int j = 0 ; j < col ;  j++) {
            cout << mat[i][j] << ' ';
        }
        cout << endl ;
    }
}


int main() {
    

    //Base Case  1
    for ( int i = 0 ; i < row ; i ++) {
        mat[row-1][i] = 1 ;
    }

    // Base case 2 
     for ( int i = 0 ; i < row ; i ++) {
        mat[i][col-1] = 1 ;
    }

    for ( int i = row-2 ; i > -1 ; i -- ) {
        for (int j = col-2; j > -1; j--)
        {
            mat[i][j] = mat[i+1][j] + mat[i][j+1];
        }
        
    }
    displayDP();
    cout << mat[0][0] ;

}