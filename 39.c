/*

 	Example: Write a program that reads an integer value N and prints an increasing count from 0 
 	to N. If the program reads a negative value, keep asking for an integer until the number is 
 	positive.
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
	
	do {
		printf("Enter an entire number:\n");
		scanf("%d", &N);
	}while( N <= 0 );
	
	i = 0; 
	
	while(i <= N){
 		printf("%d ", i);
 		i += 1;
 	}
	return 0;
}
