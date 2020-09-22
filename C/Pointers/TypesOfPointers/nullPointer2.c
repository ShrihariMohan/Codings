// Which of the following is null pointer  ??

#include <stdio.h>

int * p ;
void main() {
    ;
} // Null

void main() {
    int * p ;
} // wild pointer

static int * p ;
void main() {
    ;
} // Null

void main() {
    static int * p ;
}// NULL