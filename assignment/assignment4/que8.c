#include <Stdio.h>
void main() {
    int n = 145;
    int fact;
    int result = 0;
	int q = n;
	
	while(q > 0){
			int rem = q % 10;
			
		
			fact = 1;
			int  i = 1;
			
				while(i <= rem){
			fact = fact * i;
			i++;
		}
			result = result+fact;
			q = q/ 10;	
	}

	if(result == n){
	printf("strong number %d" , n);
}else{
	printf("this is not strong number %d" , n);
}
}

	