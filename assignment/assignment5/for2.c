 #include <stdio.h>
  void main(){
  	int n;
  	int count = 0;
  	printf("enter the vlaue");
  	scanf("%d" , &n);
  		
  		
    if (n < 2) {
        printf("Not a prime number: %d\n", n);
    }
  	
  	for(int i = 1 ; i<=n; i++){
	if(n % i== 0)
	{
		count++;
}
	}
		
		if(count == 2){
		printf("prime value %d" , n);
		}else{
			printf("not prime value %d" , n);
		}
		
		
}

