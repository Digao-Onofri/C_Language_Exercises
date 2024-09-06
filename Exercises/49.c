/*

 	Example:  Make a program that reads an N number and shows the sum of the first N terms of 
 	the following expression: S = 1 – 2 + 3 – 4 + 5 – 6 + ... + N. 
 	Youtube lesson: https://youtu.be/ochbA5vEG4M
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
//start of the program
int main()
{
	int n, i, signal = 1, sum;

	printf("Enter an integer:\n");
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++){
		signal *= -1;
		sum = sum + (i * signal);
	}

 	printf("The sum of the sequence is: %d\n", sum);
 	
	return 0;
}
