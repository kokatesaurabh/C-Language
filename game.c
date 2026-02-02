#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	int number, guess, nguesses;
	srand(time(0));
	number = rand()%100 +1;
////	generate a random number between 1 and 100
//	printf("the number is %d", number);
//	keeep running the loop untill the number guessed
	do{
		printf("guess the number between 1 to 100\n");
		scanf("%d", &guess);
		if(guess>number){
			printf("lower number please!\n");
		}
		else if(guess<number){
			printf("higher number please!\n");
		} else{
			printf("you guessed it in %d attempts\n",nguesses);
		}
		nguesses++;
	}while(guess!=number);
	
	
	
	return 0;
}
