#include<stdio.h>

struct Date {
    int day ;
    int month ;
    int year ;
}
int main() {
    struct Date date1 ;
    struct Date date2 ;

    //Date 1
    date1.day = 02 ;
    date1.month = 05;
    date1.year = 2013; 
    
    //Date 2
    date2.day = 02 ;
    date2.month = 06;
    date2.year = 2013; 
    
    return 0 ;
}