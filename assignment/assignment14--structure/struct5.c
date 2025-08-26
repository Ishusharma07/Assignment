#include <stdio.h>

struct SalesManager{
	int id;
	char name[30];
	double salary;
	float incentive;
	int target;
}; 

void main(){
	
	struct SalesManager a1,a2;
	
	a1.id = 1;
	strcpy(a1.name, "ishu");
	a1.salary = 20000;
	a1.	incentive = 20.2;
	a1.target = 45;	
	
	printf("id= %d\nname= %s\nsalary= %lf\nincentive= %f\ntarget= %d\n" ,
	a1.id , a1.name , a1.salary , a1.incentive , a1.target
	);
	
	printf("enter the value of a2");
	scanf("%d" , &a2.id);
	scanf("%s" , a2.name);
	scanf("%lf" , &a2.salary);
	scanf("%f" , &a2.incentive);
	scanf("%d" , &a2.target);
	
		printf("id= %d\nname= %s\nsalary= %lf\nincentive= %f\ntarget= %d" ,
	a2.id , a2.name , a2.salary , a2.incentive , a2.target
	);
	
}