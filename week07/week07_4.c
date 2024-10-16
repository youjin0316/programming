#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int n){
	int res=1;
	for(int i=1;i<=n;i++){
		res*=i;
	}
	return res;
}
int combination (int n,int r){
	return factorial(n)/factorial(n-r)/factorial(r);	
}
int get_integer(){
	int x;
	printf("Enter the value: ");
	scanf("%i",&x);
	return(x);
}
int main() {
	int n,r;
	
	n=get_integer();
	r=get_integer();
	
	printf("The result of C(%i,%i) is %i.",n,r,combination(n,r));
	
	return 0;
}