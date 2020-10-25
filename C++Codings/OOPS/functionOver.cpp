#include<iostream>
using namespace std;

void print( int id) {
    cout << "Inside int function" ;
}

void print ( double id) {
    cout << "Inside double funtion" ;
}


int main() {
    print(10.5);
}