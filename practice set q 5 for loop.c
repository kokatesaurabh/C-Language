#include <stdio.h>
int main(){
	int i=1, sum=0, n=12;
//	
//	for(i=0;i<=n; i++){
//	sum +=i;
//	}
	//1->10 
	while(i<=n){ 
	sum+=i;   // sum= sum+i
	i++;
	}
	
	printf("the value of sum(1 to 12) is %d", sum);
	
	
	
	return 0;
}
