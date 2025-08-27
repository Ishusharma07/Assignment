#include <stdio.h>
void main(){
	int i = 1;
	int sum = 0;
	while(i<=5){
		printf("num = %d\n" , i);
		sum = sum+i;
		i++;
	}
	
	printf("sum %d" , sum);
	
}