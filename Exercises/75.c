/*

 	Example:  Make a program that reads a 4x5 matrix of integers. Show the value of the largest 
 	element as an answer present in the matrix, the row and column in which it is located. Print 
 	the response values in a single line, separated by a single space. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define ROW 4
#define COL 5
int main()
{
	int matrix[ROW][COL], i, j, biggest, posx, posy;
	
	biggest = matrix[0][0];
	posx = 0;
	posy = 0;
	
	for(i = 0; i < ROW; i++){
		for(j = 0; j < COL; j++){
			scanf("%d", &matrix[i][j]);
			if(biggest < matrix[i][j]){
				biggest = matrix[i][j];
				posx = i;
				posy = j;
			}
		}
	}
	
   	printf("The biggest value in the matrix is: %d\nThe row position is: %d\nThe column position is: %d", biggest, posx, posy);

	return 0;
}
