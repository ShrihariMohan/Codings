#include<stdio.h>
#include"stdio.h"

/*
 When using the double quotes(” “), the preprocessor 
 access the current directory in which the source “header_file” is located. 
 This type is mainly used to access any header files of the user’s program or 
 user-defined files.

While importing file using angular brackets(<>), the the preprocessor uses a 
predetermined directory path to access the file. It is mainly used to access 
system header files located in the standard system directories.
*/
void main() {
    printf("Hello");
}