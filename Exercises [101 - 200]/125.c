/*

 	Example:  Create a program that reads the number of rows, columns, and values of an array, 
 	allocating dynamics. Next, show the smallest and largest value you typed, as well as the row 
 	and column in which you enter are. 
 	Youtube lesson: https://youtu.be/ZCmzl4hyWiA
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<stdlib.h>

int main() {
	int **mat;
	int i, j, rows, col, b, l;
	int brows, bcol, lrows, lcol; 
	
	printf("Enter the amount of rows and colunms:\n");
	scanf("%d %d", &rows, &col);
	
	//allocating memory for the rows of the matrix
	mat = (int **)malloc(rows * sizeof(int*));
	//testing if the computer give to us the memory
	if(mat == NULL){
		exit(1);
	}
	
	//allocating memory for the columns of the matrix
	for(i = 0; i < col; i++){
		mat[i] = (int *)malloc(col * sizeof(int));
		//testing if the computer give to us the memory
		if(mat[i] == NULL){
			exit(1);
		}
	}
	
	//reading the input
	for(i = 0; i < rows; i++) {
		for(j = 0; j < col; j++) {
			scanf("%d", &mat[i][j]);
		}
	}
	
	b = mat[0][0];
	l = mat[0][0];
	
	for(i = 0; i < rows; i++) {
		for(j = 0; j < col; j++) {
			if(b < mat[i][j]) {
				b = mat[i][j];
				brows = i;
				bcol = j;
			}
			if(l > mat[i][j]) {
				l = mat[i][j];
				lrows = i;
				lcol = j;
			}
		}
	}
	
	printf("Biggest value and position in the matrix are: %d [%d][%d]\n", b, brows, bcol);
	printf("Lowest value and position in the matrix are: %d [%d][%d]\n", l, lrows, lcol);

	//free the memory allocated
	for(i = 0; i < col; i++){
		free(mat[i]); 
	}
	free(mat);

	return 0;
}
