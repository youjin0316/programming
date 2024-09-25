#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char ch;
	
	printf("enter an character : ");
	scanf("%c",&ch);
	
	printf("the next chracter of %c (%i) is %c (%i)",ch,ch,ch+1,ch+1);
	

	return 0;
}