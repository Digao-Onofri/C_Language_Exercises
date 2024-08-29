/*

 	Example: Write a program that reads an integer value N and prints an increasing count from 0 
 	to N. If the program reads a negative value, keep asking for an integer until the number is 
 	positive.
 	Youtube lesson: https://youtu.be/ISI_aaVzlC8
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

#include<stdio.h>
int main()
{
	int N, i;
	
	do {
		printf("Enter an integer number:\n");
		scanf("%d", &N);
	}while( N <= 0 );
	
	i = 0; 
	
	while(i <= N){
 		printf("%d ", i);
 		i += 1;
 	}
	return 0;
}
