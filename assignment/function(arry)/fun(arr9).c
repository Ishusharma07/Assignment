#include <stdio.h>
void reverse();
void main(){
	reverse();
}
void reverse(){
	int arr[5] = {1,2,3,4,5};
	
	for(int i = 0 ; i < 5 ; i++){
		printf("%d " , arr[i]);
	}
	printf("\n");
	
	for(int i = 4 ; i>=0 ; i-- ){
		printf("%d " , arr[i]);
	}
}