#include <stdio.h>
#include <string.h>
void main()
{
	char str1[20]= "ishu sharma";
	char str2[20]= " kanu sharma";
	
	strncat(str1, str2, 7);
	printf("concat %s" , str1 );	
}