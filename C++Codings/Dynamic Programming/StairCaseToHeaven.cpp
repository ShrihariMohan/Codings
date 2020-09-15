
/*
There are n stairs, a person standing at the 
bottom wants to reach the top. 
The person can climb either 1 stair or 2 stairs 
at a time. 
Count the number of ways, 
the person can reach the top.

Condition : n > 1 

Input: n = 1
Output: 1
There is only one way to climb 1 stair

Input: n = 2
Output: 2
There are two ways: (1, 1) and (2)

Input: n = 3
Output: 3
There are three ways: (1, 1 , 1) , (2 , 1) and  (1 , 2) 

Input: n = 4
Output: 5
(1, 1, 1, 1), (2, 1, 1), (1, 2, 1),
(1, 1, 2), (2, 2)

*/
#include <iostream>
using namespace std;

int main() {
    int height = 5 ;
    int ways[height+1] = {0};
    ways[0] = 1 ;
    ways[1] = 1 ;

    for ( int i = 2 ; i <= height ; i ++) {
        ways[i] = ways[i-1] + ways[i-2] ;
    }

    cout << ways[height];
}