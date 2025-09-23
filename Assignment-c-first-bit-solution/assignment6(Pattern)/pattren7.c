#include <stdio.h>
void main()
{
	int n = 4;
	int i = 1;
	
	for(int row = 1 ; row<=n ; row++){	
		for(int col = 1 ; col<=row ; col++){
			printf("%d" , i);
			i++;
		}
		printf("\n");
}

}


 