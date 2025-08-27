// return type and not arrgument;
int sum();
char main()
{
		int res =	sum();
		printf("value %d" , res);
}

int sum()
{
	int a = 10;
	int b = 12;
	int c = a +b;
	
	return c ;
}