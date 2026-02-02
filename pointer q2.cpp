#include <stdio.h>
 
 void printadd(int a){
 	printf("the adress of variable i is %u\n", &a);
 }
int main(){
	int i =4;
	printf("the value of variable a is %d\n", i);
	printadd(i);
	printf("the adress of variable i is %u\n", &i);
	
	
	
	return 0;
}
