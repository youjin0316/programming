#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student{
	int ID;
	int score;
};

void main(void){
	struct student s[STUDENTNUM];
	int i;
	double average;
	double sum=0;
	int high=0;
	
	for(i=0;i<STUDENTNUM;i++){
		printf("Input the ID: ");
		scanf("%d",&s[i].ID);
		printf("Input the score: ");
		scanf("%d",&s[i].score);
		sum+=s[i].score	;
		
		if(s[i].score>=s[high].score){
			high=i;
		}
	}
	printf("The average of the score: %f\n",sum/STUDENTNUM);
	printf("The highest score - ID: %d, score: %d",s[high].ID,s[high].score);
	
}