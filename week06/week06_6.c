#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	int trials=0;
	int answer=50;
	
	do{
	printf("Guess a number: ");
	scanf("%i",&num);
	trials++;
	
	if (num>answer){
		printf("High!\n");
    }
	else if (num<answer){
		printf("Low!\n");
	}	
	}while (num!=answer);	
	
	printf("Congratulation! Trials: %i",trials);
	
	return 0;
	
}