#include <stdio.h>

struct admin{
	int id;
	char name[20];
	int salary;
	double allownce;
};

void main(){

struct admin a1, a2;

a1.id = 1;
strcpy(a1.name , "kanu");
a1.salary = 100000;
a1.allownce = 5000;

printf("id %d\nname %s\n salary %d\n allownce  %.lf\nTotal Salary: %.2lf\n\n"
 ,a1.id , a1.name , a1.salary , a1.allownce , a1.salary + a1.allownce);
 
 

printf("enter the value is a2");

scanf("%d" , &a2.id);
scanf("%s" , a2.name);
scanf("%d" , &a2.salary);
scanf("%lf" , &a2.allownce);

printf("id %d\n name %s\n salary %d\n allownce %l  %.lf\nTotal Salary: %.2lf\n\n" 
	,a2.id , a2.name , a2.salary , a2.allownce , a2.salary + a2.allownce);
}