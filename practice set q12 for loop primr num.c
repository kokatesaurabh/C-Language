#include <stdio.h>
int main(){
       int n, prime=1;
       printf("enter the value of n \n");
	   scanf("%d", &n);
	   for(int i=2; i<n; i++){
	   	if(n%i==0){
	   		prime=0;
	   		break;
		   }
	   }	
	if(prime==0){
	printf("this is not a prime number\n");
	}
	else{
		printf("this is prime number\n");
	}
	
	
	
	return 0;
}
