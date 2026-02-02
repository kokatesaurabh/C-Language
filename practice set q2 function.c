#include <stdio.h>
int convert(float celsius);
int main(){ 
          
        float fahrenheit, celsius;
	   scanf("%f", &celsius); 
	   convert(celsius)   ;                                                                                                            
       
	 
	
	
	
	return 0;
}
int convert(float celsius)
{
	float farhenheit;
	 farhenheit= ((celsius*9)/5)+32;
        printf("convert tempratuer in farhenheit is %f\n", farhenheit);
	
}
