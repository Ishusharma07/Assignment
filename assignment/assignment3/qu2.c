#include <stdio.h>
void main(){
	int s1 = 10;
	int s2 = 590;
	int s3 = 40;
	
	printf("%d %d %d = side" , s1,s2,s3);
	
	if(s1==s2 && s2==s3){
		printf("euilateral");
	}else if(s1==s2|| s2==s3|| s1==s3){
		printf("isosceles");
	}else{
		printf("scalene");
	}
}