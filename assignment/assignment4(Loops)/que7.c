#include <stdio.h>
void main(){
	int a = 5;
	int value = 1;
	int i = 1;
	
	while( i <= a){
		value = value *i ;
		i++;
	}
	
	printf("factorial is %d and %d" , a ,	value);
}