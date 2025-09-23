#include <stdio.h>
void main(){
	int arr[5] = {1,2,3,4,5};
	int brr[5] = {6,7,8,9,10};
	int merge[10];
	
	for(int i = 0 ; i < 5 ; i++){
		merge[i] = arr[i]; 
	}
	for(int i = 0 ; i < 5 ; i++){
		merge[i+5] = brr[i];
	}
	
	for(int i = 0 ; i < 10 ; i++){
		printf("%d " , merge[i]);
	}
	
}    