#include <stdio.h>

struct hr{
	int id;
	char name[20];
	int salary;
	double commission;
	
};

void main(){
	struct hr e1,e2;
	
	e1.id = 1;
	strcpy(e1.name , "ishu");
	e1.salary = 1000;
	e1.commission = 2000;
	
	printf("id= %d\nname= %s\nsalary= %d\ncommission= %lf\n" ,
	 e1.id , e1.name , e1.salary , e1.commission);
	 
	 printf("enter the value e2\n");
	 scanf("%d" , &e2.id);
	 scanf("%s" , e2.name);
	 scanf("%d" , &e2.salary);
	 scanf("%lf" , &e2.commission);
	 
	 	printf("id= %d\nname= %s\nsalary= %d\ncommission= %lf" ,
	 e2.id , e2.name , e2.salary , e2.commission);
	 
	 
	 
	
}