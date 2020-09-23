/*
Little Endian
If the write operation is more prior than read
then we go for little endian

Generally Processor based applications
are application

Big Endian
If the read operations are more prior we go
for endian

Generally Controller based use this.

short int a = 5 ;

a = 0000 0000 0000 0101
a = 0x 0005 

Let the Starting address be 500 

LE => 501 -> 0000 0101
      502 -> 0000 0000

BE => 501 -> 0000 0000
      502 -> 0000 0101  

*/

#include<stdio.h>

void main() {
    
}