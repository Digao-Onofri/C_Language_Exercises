/*

 	Example:  Create a program that reads the number of rows, columns, and values of an array, 
 	allocating dynamics. Next, show the smallest and the biggest even value you typed, as well 
	as the row and column in which you enter are. 
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
	int i, j, **mat, row, col;
	int smallest, biggest;
	int srow, scol, brow, bcol;
	
	printf("Enter the amount of rows and columns:\n");
	scanf("%d %d", &row, &col);
	
	mat = (int **)malloc(row * sizeof(int *));
	//checking if the computer give memory for the rows
	if(mat == NULL){
		exit(1);
	}
	for(i = 0; i < row; i++){
		mat[i] = (int*)malloc(col * sizeof(int));
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
	
	smallest = mat[0][0];
	biggest = mat[0][0];

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			if(smallest > mat[i][j] && mat[i][j] % 2 == 0){
				smallest = mat[i][j];
				srow = i;
				scol = j;
			}
			if(biggest < mat[i][j] && mat[i][j] % 2 == 0){
				biggest = mat[i][j];
				brow = i;
				bcol = j;
			}
		}
	}

	printf("Second biggest value: %d is placed in the position [%d][%d]\n", biggest, brow, bcol);
	printf("Second smallest value: %d is placed in the position [%d][%d]\n", smallest, srow, scol);

	//free the memory allocated for the columns
	for(i = 0; i < col; i++){
		free(mat[i]);
	}
	//free the memory allocated for the rows
	free(mat);

	return 0;
}	
