#include <stdio.h>
void main()
{
	int n = 5; 
	for(int row = n; row >=1; row--){
		for(int col = 1 ; col<=row; col++){
		printf("* ");
	}
	printf("\n");
}

}
