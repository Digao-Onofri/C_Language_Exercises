/*

 	Example: Write a program, which reads a positive integer N and calculates de sum of the 
 	first N numbers. If the program reads a negative value, keep asking for an integer until
 	the number is positive.
 	Youtube lesson: https://youtu.be/OJgNFPzcllQ
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main()
{
	int n, i, sum;
	
	i = 0;
	sum = 0;
	
	do {	
		printf("Enter an integer number:\n");
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
