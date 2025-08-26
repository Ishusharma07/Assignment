#include <stdio.h>
struct time{
	int hour;
	int mint;
	int sec;
};

void main(){
	struct time t1,t2;
	
	t1.hour = 4 ;
	t1.mint = 45;
	t1.sec = 30;
	
	printf("date time second=\t");
	printf("%d : %d : %d \n" , 
	t1.hour , t1.mint , t1.sec);

}