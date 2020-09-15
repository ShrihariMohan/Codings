#include<stdio.h>

 extern int a ;
 a = 25 ; // Not function dependent 
// any one can acess

void dummy() {
    printf("%d ",a);
}
void main() {

    // AUTO OR LOCAL VARIBALE
    int a = 70 ;

    {
       int a = 35;
       int a = 25 ;
        {
            printf("%d ",a);
        }// a = 35 dead
        printf("%d ",a);
    } // a 25 dead

    printf("%d ",a);
    dummy();

    for ( int i = 0; i < 10 ; i++ ) {
        // statements

        // i can be used only here
    }

}