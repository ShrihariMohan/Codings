#include<iostream>
#include <climits>
using namespace std;
#define N 4 

int printMaxSumSub(int mat[][N], int k) 
{ 
    // k must be smaller than or equal to n 
    if (k > N) return 0; 
  
    // 1: PREPROCESSING 
    // To store sums of all strips of size k x 1 
    int stripSum[N][N]; 
  
    // Go column by column 
    for (int j=0; j<N; j++) 
    { 
        // Calculate sum of first k x 1 rectangle 
        // in this column 
        int sum = 0; 
        for (int i=0; i<k; i++) 
            sum += mat[i][j]; 
        stripSum[0][j] = sum; 
  
        // Calculate sum of remaining rectangles 
        for (int i=1; i<N-k+1; i++) 
        { 
            sum += (mat[i+k-1][j] - mat[i-1][j]); 
            stripSum[i][j] = sum; 
        } 
    } 
  
    // max_sum stores maximum sum and its 
    // position in matrix 
    int max_sum = INT_MIN, *pos = NULL; 
  
    // 2: CALCULATE SUM of Sub-Squares using stripSum[][] 
    for (int i=0; i<N-k+1; i++) 
    { 
        // Calculate and print sum of first subsquare 
        // in this row 
        int sum = 0; 
        for (int j = 0; j<k; j++) 
            sum += stripSum[i][j]; 
  
        // Update max_sum and position of result 
        if (sum > max_sum) 
        { 
            max_sum = sum; 
            pos = &(mat[i][0]); 
        } 
  
        // Calculate sum of remaining squares in 
        // current row by removing the leftmost 
        // strip of previous sub-square and adding 
        // a new strip 
        for (int j=1; j<N-k+1; j++) 
        { 
            sum += (stripSum[i][j+k-1] - stripSum[i][j-1]); 
  
            // Update max_sum and position of result 
            if (sum > max_sum) 
            { 
                max_sum = sum; 
                pos = &(mat[i][j]); 
            } 
        } 
    } 
  
    // Print the result matrix

    for ( int i = 0 ; i < N ; i ++) {
        for ( int j = 0 ; j < N ; j ++) {
            cout << stripSum[i][j] << ' ';
        }
        cout << endl ;
    }
    int count = 0 ; 
    for (int i=0; i<k; i++) 
    { 
        for (int j=0; j<k; j++) 
            count+= *(pos + i*N + j);  
    } 
    return count ;
} 
int main() {
    int mat[N][N] = {2, -8, 4, -6, 7, 1, 
    -5, 3, -9, 7, 6, 5, 8, 3, 2, -4 }; 
    int k = 3; 
   
    cout << "Maximum sum 3 x 3 matrix is\n"; 
    cout << printMaxSumSub(mat, 4); 
  
    return 0; 
}