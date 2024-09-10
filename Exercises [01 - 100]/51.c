/*

 	Example:  Make a program that reads an N number and shows the sum of the first N terms of 
 	the following expression, accurate to two decimal places: S = 0/1 + 2/2 + 4/4 + 6/8 + 8/16 + 
 	10/32 + 12/64 + 14/128 + ... 
 	Youtube lesson: https://youtu.be/1RJNz_WjscQ
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main()
{
	int integer, numerator, control;
	float sum, denominator = 1;
	
	printf("Enter an integer:\n");
	scanf("%d", &integer);
	
	for (numerator = 0, control = 1; control <= integer; numerator += 2, control++){
		sum = sum + ( numerator / denominator );
		denominator *= 2;
	}
 	
 	printf("The sum of the sequence is: %.2f\n", sum);

	return 0;
}
