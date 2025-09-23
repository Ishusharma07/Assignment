#include <stdio.h>
#include <string.h>
void main()
{
	char str1[20]= "ishu sharma";
	char str2[20]= "kanu sharma";
	
 int res = 	strcmp(str1, str2);
 if(res == 0 )
 		printf("str1 and str2 is same");
else if(res>0)
		printf("str2 value is greater");
else
printf("str1 is smaller");
		
}