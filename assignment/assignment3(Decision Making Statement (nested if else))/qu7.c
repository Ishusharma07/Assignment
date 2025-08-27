#include <stdio.h>
void main(){
	int age = 16;
	if(age<12){
		printf("child %d" , age);
	}else if(age >= 12 && age <=19){
		printf("Teenager %d" , age);
	}else if(age >= 20 &&  age <=59){
		printf("adult %d" , age);
	}else{
		printf("senior %d" , age);
	}	
}