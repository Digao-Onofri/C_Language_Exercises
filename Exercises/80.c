/*

 	Example:  Make a program that reads a 3x3 matrix of integers. Show the value of the second 
 	largest as an answer element present in the matrix, the row and column in which it is 
 	located. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define MAX 3
int main()
{
	int a[MAX][MAX], i, j, largest, second_largest, row, col;
	
	for(i = 0 ; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			printf("Enter the value placed on the position [%d][%d]\n", i, j);
			scanf("%d", &a[i][j]);
		}
	}
	
	largest = a[0][0];
	
	for(i = 0 ; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			if(largest < a[i][j]){
				second_largest = largest;
				row = i;
				col = j;
				largest = a[i][j];
			}
			else if(second_largest < a[i][j]){
				second_largest = a[i][j];
				row = i;
				col = j;
			}
		}
	}	
	
	printf("The second largest value is: %d and it is placed in: [%d][%d]\n", second_largest, row, col);

	return 0;
}
