#include <stdio.h>
int sum(int a, int b);
int main(){
	int a=4,b=7;
	int result=sum(a,b);
	printf("the value of a and b is %d and %d\n", a, b);
    printf("the value of 4+7 is %d\n", result);
    printf("the value of a and b after function call is %d and %d\n", a, b);
	return 0;
}
int sum(int a, int b){
	int c;
	c=a+b;
	a=2434;
	b=5433;
	return c;
}

