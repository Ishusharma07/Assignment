#include <stdio.h>
void temperature();
void main(){
	temperature();
}

void temperature(){
	int a = 85;
	int cel;
	
	cel = (a*1.8)+32;
	
	printf("cel= %d" , cel);
}