#include <stdio.h>
void main()
{
 	int num = 121;
	int temp = num;
	int rem;
	int rev = 0;
	
	while(temp != 0){
		rem = temp % 10;
		rev = rev * 10 + rem;
		temp = temp / 10;
	}
	
	if(num == rev){
		printf("pollindrome %d\n" , num);
	}else{
		printf("not pallindrome %d\n" , num);
	}	
 	
}
