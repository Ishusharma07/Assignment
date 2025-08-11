#include <stdio.h>
void main()
{

	char val = 'K';
	if(val >= 'A' && val <= 'Z' ){
		printf("character is uppercase = %c\n" , val);
	}else if( val >=  'a' && val  <= 'z'){
		printf("character lowercase =  %c\n" , val);
	}else{
		printf("this is not a character = %c" , val);
	}

}
