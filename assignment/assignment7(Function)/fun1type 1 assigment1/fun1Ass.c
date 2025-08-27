#include <stdio.h>]
void evenodd();
void main()
{
	evenodd();
}

void evenodd(){
	int n = 10;
	if(n % 2 == 0){
		printf("even= %d" , n);
	}else{
		printf("odd = %d" , n);
	}
}