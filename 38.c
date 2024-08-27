/*

 	Example: Write a program that reads an integer value N and prints a countdown from N to 1.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
int main()
{
	int N, i;
	
	printf("Enter an integer number:\n");
	scanf("%d", &N);
	
	i = 1;
	
	while ( i <= N ){
 		printf("%d ", N);
 		N += -1;
 	}
 	
	return 0;
}
