/*

 	Example:  Make a program that reads a 3x3 matrix of integers. Show the value of the second 
 	largest element present in the matrix as an answer, the row and column in which it is 
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
	int a[MAX][MAX], i, j, largest, row_largest, col_largest;
	int second_largest, row_second_largest, col_second_largest;
	
	printf("Enter the values of the matrix a:\n");
	for(i = 0 ; i < MAX; i++){ 
		for(j = 0; j < MAX; j++){
			scanf("%d", &a[i][j]); 
		}
	}
	
	largest = a[0][0];
	row_largest = 0;
	col_largest = 0;
	
	for(i = 0 ; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			if(largest < a[i][j]){
				second_largest = largest;
				row_second_largest = row_largest;
				col_second_largest = col_largest;
				row_largest = i;
				col_largest = j;
				largest = a[i][j];
			}
			else if(second_largest < a[i][j]){
				second_largest = a[i][j];
				row_second_largest = i;
				col_second_largest = j;
			}
		}
	}	
	
	printf("The second largest value is: %d and it is placed in: [%d][%d]\n", second_largest, row_second_largest, col_second_largest);

	return 0;
}
