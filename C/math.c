#include<stdio.h>
#include<math.h>

void main() {

    printf("%f ",hypot(3,4)); // 5.000000

    printf("%f ",floor(3.2)); // 3.00000
    printf("%f ",floor(-3.2)); // -4.0000

    printf("%f ",ceil(-3.2)); // -3.000
    printf("%f ",ceil(3.2)); //4.00000

    printf("%f ",sqrt(25)); // 5.0000
    printf("%f ",pow(25,2)); // 625.0000
}