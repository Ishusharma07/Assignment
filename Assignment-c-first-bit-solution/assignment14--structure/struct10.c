#include <stdio.h>
struct Product{
	
	int id;
	char name[30];
	int quantity;
	double price;
};
void main(){
	struct Product  p1 , p2;
	
	p1.id = 1;
	strcpy(p1.name ,  "ishu");
	p1.quantity = 5;
	p1.price = 10000;
	
	printf("id= %d\nname= %s\nquantity= %d\nprice= %lf\n" , 
	p1.id , p1.name , p1.quantity , p1.price);
	
	printf("enter the value of product 2");
	scanf("%d" , &p2.id);
	scanf("%s" , p2.name);
	scanf("%d" , &p2.quantity);
	scanf("%lf" , &p2.price);
	
	printf("id= %d\nname= %s\nquantity= %d\nprice= %lf\n" , 
	p2.id , p2.name , p2.quantity , p2.price);
	
}