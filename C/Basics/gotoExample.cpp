#include <stdio.h>

int main() {
    int a = 20 ;
    goto here;
    {
        here :
        int a = 10  ;
        printf("%d ",a);
    }
    a;
}