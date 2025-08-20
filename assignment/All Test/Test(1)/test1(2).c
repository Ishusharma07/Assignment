#include <stdio.h>
void main()
{
	int year = 2022;
	if(year % 4 == 0 || year % 100 != 0 && year % 400 == 0  ){
		printf("leap %d" , year);
	}else{
		printf("not leap %d" , year);
	}
}

