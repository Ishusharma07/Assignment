#include <stdio.h>
void main()
{
	int mint = 130;
	int hour;
	hour  = mint / 60;
	mint = hour % 60;
	
	printf("hour= %d and mint= %d" , hour , mint );
}