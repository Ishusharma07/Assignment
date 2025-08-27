#include <stdio.h>
#include <string.h>
void main(){
	char str[]  = "ishu sharma";
	char dest[6];
	
	 strncpy(dest, str, sizeof(dest) - 1);
    dest[sizeof(dest) - 1] = '\0'; 
    
    printf("Source %s\n" , str);
    printf("Copied %s\n" , dest);
}