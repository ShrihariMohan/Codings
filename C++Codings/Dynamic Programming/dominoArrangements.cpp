/*
 In how many ways can one tile a 2 X N strip of square cells with 1 X 2 dominos?
 Please notice that we can put tiles either vertically or horizontally. 
 For putting vertical tiles, we need a gap of at least 2 X 2. 
 For putting horizontal tiles, we need a gap of 2 X 1. 
 Number of arrangements will be the same as the arrangements, 
 we can make with gaps of 1 and 2 (order dependent). 
 In this manner, this problem reduces to find the number of ways to 
 partition N using the numbers 1 and 2 with order considered relevant.
*/

#include<iostream>
using namespace std ;
int dp[20] ;

void fillDP() {
    dp[0] = 1 ;
    dp[1] = 1 ;
    for ( int i = 2 ; i < 20 ; i ++) {
        dp[i] = dp[i-1] + dp[i-2] ;
    }
}

int getPossibilties(int ind) {
    return dp[ind] ;
}
int main() {
    int order = 5 ;
    fillDP() ;
    cout << getPossibilties(order) ;
}