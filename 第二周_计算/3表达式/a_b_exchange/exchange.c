#include<stdio.h>

int main()
{
	int c = 1 ; 
	int a = 5 ;
	int b = 6 ;
	int t;
	c++;
	t = a ;
	a = b ;
	b = t ;
	printf("a = %d,b = %d\n",a , b );
	return 0; 
}



