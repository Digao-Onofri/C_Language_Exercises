/*

 	Example:  Make a program that reads a 3x3 matrix. This array will only be populated with 
 	elements 0 and 1 (not it is necessary to verify; Test cases will not "cheat" the entry), 
 	representing a "tic-tac-toe". Print only a "yes" or "no" (without accents) as an answer, 
 	informing if the "1" markings won the match. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define MAX 3
//start of the program
int main()
{
	int a[MAX][MAX], i, j, control;
	
	//for to read the matrix
	for(i = 0; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	
	//search if the 1 wins 
	control = 0;
	//first line
	if(a[0][0] == 1 && a[0][1] == 1  && a[0][2] == 1)
	{
		printf("sim");
		control = 1;
	}
	//second line
	else if(a[1][0] == 1 && a[1][1] == 1 && a[1][2] == 1)
	{
		printf("sim");
		control = 1;
	}
	//third line		
	else if(a[2][0] == 1 && a[2][1] == 1 && a[2][2] == 1)
	{
		printf("sim");
		control = 1;
	}
	//first column
	else if(a[0][0] == 1 && a[1][0] == 1 && a[2][0] == 1)
	{
		printf("sim");
		control = 1;
	}
	//second column
	else if(a[0][1] == 1 && a[1][1] == 1 && a[2][1] == 1)
	{
		printf("sim");
		control = 1;
	}
	//third column
	else if(a[0][2] == 1 && a[1][2] == 1 && a[2][2] == 1)
	{
		printf("sim");
		control = 1;
	}
	//main diagonal
	else if(a[0][0] == 1 && a[1][1] == 1 && a[2][2] == 1)
	{
		printf("sim");
		control = 1;
	}
	//secondary diagonal
	else if(a[0][2] == 1 && a[1][1] == 1 && a[2][0] == 1)
	{
		printf("sim");
		control = 1;
	}
	else if(control == 0)
	{
		printf("nao");
	}
	
	return 0;
}
