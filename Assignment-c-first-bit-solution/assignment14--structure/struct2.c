#include <stdio.h>

struct employee{
	int id;
	char name[30];
	double salary;
};

void main(){
	
	struct employee e1 , e2;
	
	strcpy(e1.name, "ishu");
	e1.salary =  80000;
	e1.id = 1;
	
	printf( "emloyee id %d\n" "employee name %s\n" "employee salary  %lf\n" 
	, e1.id, e1.name , e1.salary );
	
	printf("enter the name and salary \n");
	scanf("%d" , &e2.id	);
	scanf("%s" , e2.name);
	scanf("%lf" , &e2.salary);
	printf("employee id %d\n" "employee name %s\n" "employee salary %lf\n"
	 , e2.id , e2.name , e2.salary );


}

