/*

 	Example:  Make a program that reads a 4x4 matrix of integers. Next, show as an answer how 
 	many values that is bigger than 10 are present in the matrix. 
 	Youtube lesson: https://youtu.be/EA1phZHZ3UI
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define MAX 4
int main()
{
	int matrix[MAX][MAX], i, j, control = 0;
	
	for(i = 0; i < MAX; i++){
		for(j = 0; j < MAX; j++){
			scanf("%d", &matrix[i][j]);
			if(matrix[i][j] > 10){
				control++;
			}
		}
	}
	
	printf("The amount of values that are bigger than 10 is: %d\n", control);
	
	return 0;
}
