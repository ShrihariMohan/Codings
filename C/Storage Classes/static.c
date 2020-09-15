// Life time ? -> till program ends
// scope -> within the same file .
#include <stdio.h>
 // BSS
         

// void test() {
//     printf("%d ", i); // 1
//     i = i + 1 ;
// }

// void main() {
//     static int i ;
//     printf("%d ",i); // 0
//     i = i + 1 ;
//     test() ;
    
//     printf("%d ",i); // 2
// }

// void main() {
//     printf("%d ",i); // 0
//     i = i + 1 ;
//     test() ;
//     printf("%d ",i); // 2
// }

// s = 0 ;
void main() {
    static int s ;
    s = 2 ;
    printf("%d ",s); // 2  
    if ( -- s) {
         main();
    }
    printf("%d ",s); // 2 1 0 0

}







