/*

 	Example:  Create a program that reads the number of rows, columns, and values of an array, 
 	allocating dynamics. Next, show the smallest and largest value you typed, as well as the row 
 	and column in which you enter are. 
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
	int i, **p, row, col;
	
	scanf("%d %d", &row, &col);
	
	p = (int **)malloc(row * sizeof(int *));

	for(i = 0; i < row; i++){
		p[i] = (int*)malloc(col * sizeof(int));
	}

	for(i = 0; i <)
			
	return 0;
}	
