#include<stdio.h>
// MACROS
#define i 5 
#define int 5 

// Inline FUNCTION
#define f(x,y) 100 
#define mul(a,b) a*b
#define square(x) x*x 

#define cp char * 
typedef char * cpp ;


/*
    Macros are token replacement 
    macros templates are replaced with macro expression

    Pre_Processor 
    1. Can be written anywhere in the program
    2. Every Preprocessor will have a global scope
    3. From top to bottom [Evaluation]
    4. Redefine is allowed
    5. dont put semi colon at end
    6. pre processor ends with \n and it is not a compiler language

    SYNTAX
    #define [space] name(a,b,c,d) [space] replacement [enter]
    
    difference between macros and function ?
    
    macros are faster .
    when the core logic is less dhan stack over head then macros should be used 
    stack overhead - time for performing push pop operations
    
    Arg type safety is not in macros 

    difference between typedef and macro ?
    typedef meant for only type replacement
    #define meant for token replacement
*/
void main() {

    cp c1 , c2 ;
    c1 == c2 ;
    cpp c3 , c4 ;
    c3 == c4 ; 
    printf("%d ",i);
    //#define square(x) x 
    printf("%d ",square(5));
    printf("%d ",int);
    printf("%d ",f(a,b));
    printf("%d ",f(7,8));
    printf("%d ",mul(7,8));
    printf("%d ",mul(2+3,3+2)); // Tricky

}