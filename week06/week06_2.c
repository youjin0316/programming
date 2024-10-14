#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int ii;
	
	printf("Enter an integer: ");
	scanf("%i",&i);
	
	if (i>=0){
		ii=i;
	}
	else{
		ii=-i;
	}
	
	printf("%i",ii);
	return 0;
}