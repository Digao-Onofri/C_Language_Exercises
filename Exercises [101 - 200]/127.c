/*

 	Example:  Create a program that allocates and reads one matrix X. Next, allocate a second 
 	matrix Y, such that Y be the transpose of X. Show the two matrices on the screen. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>
#include<stdlib.h>
int main() {
	int **mat, row, col, i, j, aux;

	printf("Enter the amount of rows and columns:\n");
	scanf("%d %d", &row, &col);
	
	mat = (int **)malloc(row * sizeof(int *));
	//checking if the computer give memory for the rows
	if(mat == NULL){
		exit(1);
	}
	for(i = 0; i < col; i++){
		mat[i] = (int *)malloc(col * sizeof(int));
		//checking if the computer give memory for the cols
		if(mat[i] == NULL){
			exit(1);
		}
	}

	printf("Enter the values of the matrix:\n");
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			scanf("%d", &mat[i][j]);
		}
	}

	for(i = 0; i < row * col; i++) {
		for(j = 0; j < col; j++){
			if(i != j){
				/*aux = mat[i][j];
				mat[i][j] = mat[j][i];
				mat[j][i] = aux;*/
			}
		}
	}
	
	//printing the matrix transpose
	for(i = 0; i < row; i++) {
		for(j = 0; j < col; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	//free the memory allocated for the columns
	for(i = 0; i < col; i++){
		free(mat[i]);
	}
	//free the memory allocated for the rows
	free(mat);

	return 0;
}
