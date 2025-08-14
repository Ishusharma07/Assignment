#include <stdio.h>
void hour();
void main(){
	hour();
}

void hour(){
	int mint = 130;
	int hh;
	hh = mint / 60;
	mint = hh % mint;
	
	printf("hh= %d and mint= %d"  , hh  , mint);
}