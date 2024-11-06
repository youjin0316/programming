#include <stdio.h>
#include <stdlib.h>
#define ROWS 3
#define COLS 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void addMatrix(int mat1[ROWS][COLS],int mat2[ROWS][COLS],int result[ROWS][COLS]){
	for (int i=0;i<ROWS;i++){
		for(int j=0;j<COLS;j++){
			result[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
}
void printMatrix(int mat[ROWS][COLS]){
	for (int i=0;i<ROWS;i++){
		for(int j=0;j<COLS;j++){
			printf("%d ",mat[i][j]);
		}
		printf("\n");
    }
}
int main(void) {
	int A[ROWS][COLS]={
	{2,3,0},
	{8,9,1},
	{7,0,5}
	};
	int B[ROWS][COLS]={
	{1,0,0},
	{0,1,0},
	{0,0,1}
	};
	int C[ROWS][COLS];
	
	addMatrix(A,B,C);
	printMatrix(C);

	return 0;
}
	