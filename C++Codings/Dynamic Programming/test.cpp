#include<iostream>
using namespace std ;
#define k 3

void printMat(int mat[][k]) {
    for ( int i = 0 ; i < k ; i ++) {
        for ( int j = 0 ; j < k ; j ++) {
            cout << mat[i][j] << ' ' ;
        }
        cout << endl;
    }
    cout << endl ;
}

void dp(int mat[][k] , int ord) {
    int dp[k][k] ={0};
    dp[0][0] = mat[0][0] ;
    for ( int i = 1 ; i <= k-1 ; i ++) {
        int sum = mat[0][i] + mat[0][i-1];
        dp[0][i] = sum ;
    }

    for ( int i = 1 ; i <= k-1 ; i ++) {
        int sum = mat[i][0] + mat[i-1][0];
        dp[i][0] = sum ;
    }

    for ( int i = 1 ; i < k ; i ++) {
        for ( int j = 1 ; j < k ; j ++ ) {
            dp[i][j] = mat[i][j] +dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
        }
    }

    printMat(dp);

}
int main() {

     int mat[k][k] = {{1,2,3},{4,5,6},{7,8,9}};
     printMat(mat);
     dp(mat , 2);
     return 0;
}

