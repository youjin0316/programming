#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE*file=NULL;
	char word1[50],word2[50],word3[50];
	
	printf("input a word: ");
	scanf("%s",word1);
	printf("input a word: ");
	scanf("%s",word2);
	printf("input a word: ");
	scanf("%s",word3);
	
	file=fopen("sample.txt","w");
	fprintf(file,"%s\n",word1);
	fprintf(file,"%s\n",word2);
	fprintf(file,"%s\n",word3);
	
	fclose(file);

}