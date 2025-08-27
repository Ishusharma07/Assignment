#include<stdio.h>
#include<string.h>
void main()
{
	char s[]="Hello, World!";
	char *res=strstr(s,"world");
	if(res!='\0')
		printf("Found");
	else
		printf("Not found");
}