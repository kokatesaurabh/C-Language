#include <stdio.h>
int main(){
	int skip=5, i;
//	while(i<10){
//	i++;
//	if(i!=skip)
//	{
//	continue;
//	}
//	else{
//		printf("%d\n", i);
//	}
//	}

    for(i=1;i<=10;i++)
    {
    	if(i!=skip)
    	{
    		continue;
		}
		else
		{
			printf("%d\n",i);
		}
	}
	
	
	return 0;
}
