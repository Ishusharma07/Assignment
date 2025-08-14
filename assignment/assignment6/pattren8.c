#include <stdio.h>
void main()
{
	int n = 4; 
	
	for(int row = 1; row<=n; row++){
		for(int col = 1; col<=row; col++){
			printf("* ");
		}
		
		printf("\n");
	}
	
	for(int i = n -1 ; i >= 1; i--){
	for(int j = 1; j<=i ; j++){
		printf("* ");
	}
	printf("\n");
}
}

