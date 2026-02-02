#include <stdio.h>
int main()
{
	int arr[6],i;
	for (i=0;i<6;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	printf("reverse array");
	for(i=5;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
