#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year,answer;
	
	printf("Input the year: ");
	scanf("%i",&year);
	
	answer=(year%4==0)&&(year%100!=0)||(year%400==0) ;
	printf("Is the year %d the leap year? %d",year,answer);
	return 0;
}
