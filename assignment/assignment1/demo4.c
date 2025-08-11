#include <stdio.h>
void main()
{
	int a = 10;
	int b = 20;
	int  tamp;
	tamp = a;
	a=b;
	b = tamp; 
	
	printf(" a= %d" "b=%d" , a,b );
}