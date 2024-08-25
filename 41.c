/*

 	Example: Write a program, which reads a positive integer N and calculates de sum of the 
 	first N numbers. If the program reads a negative value, keep asking for an integer until
 	the number is positive.
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
	int n, i, sum;
	
	i = 0;
	sum = 0;
	
	do {	
		printf("Enter an entire number:\n");
		scanf("%d", &n);
			
	}while(n < 0);

	while(n >= 1){
		n--;
		i++;					
		sum = sum + i;
	}
	
	printf("The sum is: %d\n", sum);
	
	return 0;
}
