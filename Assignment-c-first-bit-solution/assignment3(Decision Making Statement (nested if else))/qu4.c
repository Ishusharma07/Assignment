#include <stdio.h>
void main(){
	int a = 33;
	
	if(a>=75){
		printf("distinction %d" , a);
	}else if(a>=65){
		printf("First class %d" , a);
	}else if(a>=55){
		printf("Second class %d" , a);
	}else if(a>= 40){
		printf("pass class" , a);
	}else{
		printf("fail");
	}
}