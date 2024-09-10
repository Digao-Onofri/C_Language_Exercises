/*

 	Example:  Create a program that reads the number of rows, columns, and values of an array, 
 	allocating dynamics. Next, show the smallest and largest value you typed, as well as the row 
 	and column in which you enter Are. 
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
	int i, **p, lin, col;
	
	scanf("%d %d", &lin, &col);
	
	
	p = (int **)malloc(col * sizeof(int * ));
	p[0] = (int *)malloc (lin * col * sizeof(int));
	
	printf("antes");
	for(i = 1; i < col; i++) {
		p[i] = p[i - 1] + col;
		printf("dentro");
	}
		
	
	
		
	return 0;
}	
