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
#define LIN 4
#define COL 5
int main()
{
	int n[LIN][COL], m[0][0], i, j, maior, posx, posy;
	
	maior = m[0][0];
	posx = 0;
	posy = 0;
	
	for(i = 0; i < LIN; i++){
		for(j = 0; j < COL; j++){
			scanf("%d", &n[i][j]);
			if(maior < n[i][j]){
				maior = n[i][j];
				posx = i;
				posy = j;
			}
		}
	}
	
	printf("%d %d %d", maior, posx, posy);

	return 0;
}
