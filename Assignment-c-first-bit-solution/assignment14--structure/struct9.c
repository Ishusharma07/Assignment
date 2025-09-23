#include <stdio.h>
struct complex{
	float real;
	float imag;
	
};

void main(){
	struct complex c1 , c2;
	
	c1.real = 7.5;
	c1.imag = 5.5;
	
	printf("c1= %.2f\nc2= %.2f\n" , c1.real , c1.imag);
	
	printf("enter the value complex2");
	scanf("%f", &c2.real);
	scanf("%f" , &c2.imag);
	
	printf("c1= %.2f\nc2= %.2f" , c2.real , c2.imag);
	
	 
}