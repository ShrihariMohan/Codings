#include<iostream>
using namespace std ;

class parent {
    public: void print() {
        cout << "Parent" ;
    }
};

class child : public parent{
    public: void print() {
        cout << "child" ;
    }

    public: void printing() {
        cout << "Child";
    }
};

int main () {
    parent *p = new parent() ;
    parent *c = new child();
    // p->print();
    // cout << endl;
    // c->print();
    c->printing();
}