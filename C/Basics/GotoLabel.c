#include <stdio.h>

void main() {
    

    //GOTO
    // 1. Whenever compiler sees goto label 
    // skip all the statements and goto to label;

    //2. goto here : compulsory here: must be there

    //3. but label alone is optional

    //4. USAGE -> Complext loops

    //5. Label must end with :

    //6. goto state must end with ;

    //7. within function only valid

    //8. Only one label should be there for one function

    //9. Any no of goto s are allowed
    printf("1 ");
    printf("2 ");
    printf("2.1 ");
    printf("3 ");

    while(1) {


        while(2) {


            while(3) {

               if  ( cond is true)
                goto here;    

            }
            if  (flag == 1) break ;
        }
        if ( flag == 1 ) Break ;
    }

    here:
    // statements
}