#include <stdio.h>


int print(int num) {
    printf("%d ",num);
    if ( num < 10) {
        print(num+1);
    }
    return 0 ;
}
void main() {
  
  print(1);
}