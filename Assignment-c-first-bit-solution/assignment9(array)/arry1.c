#include <stdio.h>
void main(){
	int arr[5];
	int max;
	int min;
	
	max = arr[0];
	min = arr[0];
	
	printf("enter the value");
	for(int i = 0; i < 5 ; i++){
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0 ; i < 5 ; i++ ){
		if(arr[i] > max){
			max = arr[i];
		}
		if(arr[i] < min){
			min = arr[i];
		}
	}
	printf("value max is %d\n" , max);
	printf("value min is %d" , min);
}