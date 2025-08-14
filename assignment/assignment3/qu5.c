#include <stdio.h>
void main(){
	char students = 'y';
	double price = 550;
	double totalprice;
	double discount;
	
	if(students == 'y'){
		if(price > 600){
		discount = price*0.25;
		 totalprice = price-discount;
		}else if(price >500){
			discount = price*0.15;
			totalprice = price-discount;
			}else{
				totalprice = price-discount;
			}
				printf("this is final %lf\n", totalprice);

		}
}
			
		
	