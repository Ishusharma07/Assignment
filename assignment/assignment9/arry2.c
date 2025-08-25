#include <stdio.h>
void main()
{
	int arr[5];
	int num;
	
	printf("enter the value");
	for(int i = 1 ; i < 5 ; i++){
		scanf("%d" , &arr[i]);
	}
	printf("enter to search number");
	scanf("%d" , &num);
	
	for(int i = 1 ; i < 5 ; i++ ){
		if(arr[i] == num){
			 printf("Number %d found at position %d\n", num , i);
		}
	}
	
	
}
	

