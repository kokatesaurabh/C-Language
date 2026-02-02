#include <stdio.h>
int main(){
	int physics,maths,chemistry;
	float total;
		printf("enter physics mark\n");
		scanf("%d", &physics);
		printf("enter chemistry mark\n");
		scanf("%d", &chemistry);
		printf("enter maths mark\n");
		scanf("%d", &maths);
	total=(physics + maths + chemistry/3);
	if((total<40) || physics<33 || maths<33|| chemistry<33){
	printf("your total percenteage is %f and you are fail\n", total);
}
	else{
		printf("your total percentage is %f and you are pass\n", total);
	}
	
	return 0;
}
