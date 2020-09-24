#include<iostream>
using namespace std ;

int calculateMaxProfit(int * stocks , int size) {
    int miniStock[size] ;
    int maxProfit =  0 ;
    miniStock[0] = stocks[0] ;

    for ( int i = 1  ; i < size ; i ++) {
        miniStock[i] = min ( stocks[i] , miniStock[i-1]);
    }

    for ( int i = 1 ; i < size ; i ++) {
        int currentProfit ;
        currentProfit = stocks[i] - miniStock[i] ;
        if ( maxProfit < currentProfit) {
            maxProfit = currentProfit ;
        }
    }

    return maxProfit ;
}

int main() {
    int size = 6 ;
    int stocks[size] = {3, 5, 2, 4, 6, 3};
    cout << calculateMaxProfit ( stocks , size) ;

}