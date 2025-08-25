#include <stdio.h>
void main(){
	int arr[10];
	
	printf("enter the value");
	for(int i =  0 ; i < 10 ; i++ ){
		scanf("%d" , &arr[i]);
	}
	
	for(int i = 0 ; i < 10 ; i = i + 2 ){
		printf("%d" , arr[i]); 
	}
}