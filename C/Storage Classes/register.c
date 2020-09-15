// When a Local Var is Frequently  Changed
// We can declare that in Register 
// So transaction time is Saved [ loading and unloading]

// Store it in Reg instead of Stack.

void main() {
    register int a ;
    for ( a = 1 ; a < 20000 ; a += 1) {
        // Operations ;
        
    }
}

void test (   register int i) {

}


// What happens if you store a varibale more than a size of 
// register ??

// it will be stored in stack ;

//