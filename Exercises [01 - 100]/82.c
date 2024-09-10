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
        int n; 
    
        //ask the value of n
	printf("Enter an integer value for the N: ");
	scanf("%d", &n);
	
	int a[n][n], i, j, sum_main_diagonal, sum_secondary_diagonal, sum_row, sum_col, check;
	
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
		sum_main_diagonal += a[i][i];
	}
	//Secondary diagonal
	for(i = 0, j = n - 1; i < n ; i++, j--){
		sum_secondary_diagonal += a[i][j]; 	
	}	
	
	if(sum_main_diagonal != sum_secondary_diagonal){
		printf("nao\n");
		return 1;
	}
	
	//rows and cols
	for(i = 0; i < n; i++){
		sum_row = 0;
		sum_col = 0;
		for(j = 0; j < n; j++){
		 	sum_row += a[i][j];
		 	sum_col += a[j][i];
		}
		if(sum_main_diagonal != sum_row){
			printf("nao\n");
			check++;
			break;
		}
		if(sum_main_diagonal != sum_col){
			printf("nao\n");
			check++;
			break;
		}
	}
	
	if(check == 0){
		printf("sim\n");
	}
	
	return 0;
}
