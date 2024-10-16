#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo (int a,int b){
	return(a+b);
}
int square (int n){
	return (n*n); 
}
int get_max (int x,int y){
	if(x>y) return(x);
	else return(y);
}
int main(void) {
	int p,q;
	
	printf("Enter the integers: ");
	scanf("%i %i",&p,&q);
	
	int r1= sumTwo(p,q);
	int r2= square(p);
	int r3= get_max(p,q);
	
	printf("Result - Sum: %i, Square: %i, Max: %i",r1,r2,r3);
	
	return 0;
}