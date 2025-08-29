/*

 	Example:  Make a program that reads a 3x5 matrix of integers. Next, show as an answer how 
 	many values even and how many odd values are present in the array. Print the response values 
 	in a single line, separated by a single space. 
 	Youtube lesson: https://youtu.be/EqzUIkYT-e8
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define ROW 3 //Rows
#define COL 5 //Columns
int main()
{
	int matrix[ROW][COL], i, j, even = 0, odd = 0;
	
	for(i = 0; i < ROW; i++){ //rows 
		for(j = 0; j < COL; j++){ //columns
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j] % 2 == 0){
				even++;
			}
			else{
				odd++;
			}
		}
	}

	printf("Amount of even numbers: %d\nAmount of odd numbers: %d\n", even, odd);

	return 0;
}
