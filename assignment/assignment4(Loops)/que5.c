#include <stdio.h>
void main(){
int no = 153;
int teamp =no;
int rem ; 
int sum = 0;

while(no > 0){
	rem = no % 10;
	sum = sum + rem * rem * rem;
	no = no / 10;
}
if(teamp == sum){
	printf("Amstrong %d" , teamp);
}else{
	printf("no Amstrong %d" , teamp);
}
} 