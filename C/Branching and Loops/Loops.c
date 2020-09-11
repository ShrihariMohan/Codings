#include<stdio.h>

void main() {

    // while loop 
    // Syntax

    // while( condtion ) { ;}

    // For
    // for ( init ; condition ; iteration) {} ;
    // for ( state1; state2 ; state3) {}
    // for ( ; ;) {} ;

    // state 1 executes only once
    // state 2 if true execute for body
    // once yyou reach end of the body go
    // to state 3

    //After executing state 3 go to state 2
    // state 2 if true execute for body
    // once yyou reach end of the body go


    // continue -> reach the end of the loop body
    // break -> reaches outside loop

    //int a = 10 ;
    // while ( 10 ) {
    //     printf("%d ",a);
        
    // }
    // int a = 10 ;
    // while ( a = a-1 ) {

    //     printf("%d ",a);
    //     if ( a = 5) {
    //         break;
    //     }
    // }
    // printf("end");


    // for ( int a = 10 ;  ; a = a-1) {
    //     if ( a == 5) {
    //         continue;
    //     }
    //     printf(" %d \n" , a) 
       

    // }

    // Do while
    // SYNTAX 
    // do {


    //} while(cond) ;
    // 2 types of LOOPS 
    // 1. Entry CHeck LOOP
    // 2. Exit check loop
    do {
        printf("LOOP");
        continue ;
    } while(0) ;

    while(0) {
        printf("LOOP");
    }




}