#include<stdio.h>
#include<string.h>

int main(int ab) {
     ab = 20 ;
	goto inside;
    {	int a = 100 ;
		inside :
		printf("%d",ab);      
    }
}

/* 
What does compiler do ?


*/