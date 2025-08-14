#include <stdio.h>
void main(){
	int no = 15;
	
	if(no%3==0 && no%5==0){
		printf("vlaue are div both  3 and 5= %d" , no);
	}else if(no% 3==0 && no% 5!=0){
		printf("vlaue are div  3%" , no);
	}else if(no % 3 !=0 && no % 5 == 0){
			("value are 5 %d" , no);	
	}else{
		printf("vlaue are not  div 3 and 5= %d" , no);
	}
}