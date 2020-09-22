/*
    https://computer.howstuffworks.com/c7.htm
    
    1. You should provide address for the scanf
    2. Dangerous Funtion
    3. Avoid using Scanf 
    4. use C++ 
    5. fgets() 
    6. Scanf terminates at ' ' , '\n' and '\t'
*/

#include<stdio.h>
void main() {
    int a  ;
    int *p = &a ;
    printf("Enter a Value ");
    scanf("%d",&a);
    printf("%d ",a);
}
