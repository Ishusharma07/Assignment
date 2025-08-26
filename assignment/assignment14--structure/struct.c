#include <stdio.h>

struct student{
	int age;
	char name[20];
	int rollno;
};

 void main()
 {
	struct student s1 , s2;
	
	s1.age=18;
	strcpy(s1.name , "ishu");
	s1.rollno=32;
	
	printf("age= %d\n" "name= %s\n"  "rollno %d\n" , s1.age , s1.name , s1.rollno );
	
	printf("enter the value");
	scanf("%d" , &s2.age);
	scanf("%s" ,s2.name);
	scanf("%d" , &s2.rollno);
	
printf("age= %d\n" "name= %s\n"  "rollno %d\n" , s2.age , s2.name , s2.rollno );
	
}