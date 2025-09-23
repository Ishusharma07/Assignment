#include <stdio.h>
void even();
void main(){
	even();
}
void even(){
	int arr[1];
	
	printf("enter the value\n");
	for(int i = 0 ; i < 1; i++){
		scanf("%d" , &arr[i]);
	}
	
	for(int i = 0 ; i < 1 ; i++){
		if(arr[i] %2 == 0){
			printf("even value %d\n" , arr[i]);
		}else{
			printf("odd value %d\n" , arr[i]);
		}
	}
	
}