#include <Stdio.h>
void main(){
	int no = 28;
int i = 1;
int sum = 0;

 while(i < no){
	if(no %i == 0){
		sum = sum+i;
	}
	
	i++;
}

if(no == sum){
	printf("perfect numerb %d" , no);
}else{
	printf(" not perfect %d" , no);
}
}
