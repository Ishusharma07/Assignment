#include <stdio.h>
void sum();
void main(){
	sum();
}

void sum(){
	int arr[5];
	int sum = 0;
	
	printf("enter the value");
	for(int i = 0 ; i < 5 ; i++){
		scanf("%d" , &arr[i]);
		sum = sum + arr[i];
	}
	
	printf("sum value is %d" , sum);
	
}