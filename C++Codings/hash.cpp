#include <iostream>
using namespace std;

string first , second ;
int times ;
int fHash[256] , sHash[256];

void getInput() {
    cin >> first ;
    cin >> second ;
    cin >> times ;
}

void fillHash() {
    for ( int i = 0 ; i < first.size() ; i ++) {
        fHash[ first[i] ] ++ ;
    }
    
    for ( int i = 0 ; i < second.size() ; i ++) {
        sHash[ second[i] ] ++ ;
    }
}

string checkHash() {
    for ( int i = 0 ; i < first.size() ; i ++) {
        if ( sHash[ first[i]] >= fHash [ first[i]]*times ) {
            continue ;
        }
        else return "NO" ;
    }
    return "YES" ;
}

int main(int argc, char** argv)
{
    getInput();
    fillHash() ;
    cout << checkHash() ;
}