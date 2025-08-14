#include <stdio.h>
void perimeter();
void main(){
	perimeter();
}

void perimeter(){
	int width = 40;
	int length = 20;
	int area = width*length;
	
	 int per = 2 * (width + length);
	
	printf("area = %d and per %d" , area , per);
}