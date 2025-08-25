#include <Stdio.h>
void prime();
void main(){
	prime();
}
void prime(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	for(int i = 0 ; i < 10 ; i++){
		if(arr[i]%2==0){
			printf("even number %d\n", arr[i]);
		}else{
			printf("odd number %d\n",  arr[i]);
		}
	}
}