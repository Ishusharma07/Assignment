#include <stdio.h>
struct distance{
	int feet;
	int inch;
};

void main(){
	struct distance d1 , d2;
	
	d1.feet = 20;
	d1.inch = 10;
	
	printf("feet= %d\ninch= %d\n" , d1.feet , d1.inch);
	
	printf("enter the  value d2");
	scanf("%d" , &d2.feet);
	scanf("%d" , &d2.inch);
	
	printf("feet= %d\ninch= %d" , d2.feet , d2.inch);
	
	
	
}