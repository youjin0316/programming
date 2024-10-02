#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int s;
	
	printf("Input the second: ");
	scanf("%i",&s);
	
	printf("The time is %i : %i",s/60,s%60);
	
	return 0;
}