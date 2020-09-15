#include<stdio.h>

int main() {
    int ab = 20 ;
	goto inside;
    {	
		int ab = 100 ;
		{
		inside :
		printf("%d",ab);      
		}
    }
}