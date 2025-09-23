#include <stdio.h>
#include <string.h>
void main(){
	char str[10];
	printf("enter the value");
	scanf("%s" , str);
	
	char temp[10];
	strcpy(temp , str);
	
	
	printf("orginal %s\n" , temp,str);
	printf("copy %s\n" , temp,str);
}