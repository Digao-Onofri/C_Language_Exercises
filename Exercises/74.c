/*

 	Example:  Make a program that reads a 3x5 matrix of integers. Next, show as an answer how 
 	many values even and how many odd values are present in the array. Print the response values 
 	in a single line, separated by a single space. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define LIN 3 // Lines 
#define COL 5 // Columns
//start of the program
int main()
{
	int n[LIN][COL], i, j, par, impar;
	
	par = 0;
	impar = 0;
	
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
		{
			scanf("%d", &n[LIN][COL]);
			if(n[LIN][COL] % 2 == 0)
			{
				par++;
			}
			else
			{
				impar++;
			}
		}
	}

	printf("%d %d", par, impar);

	return 0;
}
