/*

 	Example:  Make a program that reads an NxN matrix, where the user enters the value of N. 
 	Next, check if it forms a magic square. A magic square is one in which the sum of all the 
 	lines, all the columns and all diagonals are the same. Print only a "yes" or "no" (without 
 	accents) as an answer. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
//start of the program
int main()
{
	int a[n][n], i, j, s1, s2, srow, scol, check;
	
	//ask the value of n
	scanf("%d", &n)
	
	//read the values
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	check = 0;
	//checking if the matrix is an magic square 
	//Main diagonal
	for(i = 0; i < n; i++) { 
		s1 += a[i][i];
	}
	//Secondary diagonal
	for(i = 0, j = n - 1; i < n ; i++, j--){
		s2 += a[i][j]; 	
	}	
	
	if(s1 != s2){
		printf("nao");
		return 0;
	}
	
	//rows and cols
	for(i = 0; i < n; i++){
		srow = 0;
		scol = 0;
		for(j = 0; j < n; j++){
		 	srow += a[i][j];
		 	scol += a[j][i];
		}
		if(s1 != srow){
			printf("nao");
			check++;
			break;
		}
		if(s1 != scol){
			printf("nao");
			check++;
			break;
		}
	}
	
	if(check == 0){
		printf("sim");
	}
	
	return 0;
}
