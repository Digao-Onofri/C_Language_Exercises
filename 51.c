/*

 	Example:  Make a program that reads an N number and shows the sum of the first N terms of 
 	the following expression, accurate to two decimal places: S = 0/1 + 2/2 + 4/4 + 6/8 + 8/16 + 
 	10/32 + 12/64 + 14/128 + ... 
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
	int n, i, x;
	float sum, y = 1;
	
	printf("Enter an integer:\n");
	scanf("%d", &n);
	
	for (i = 0, x = 1; x <= n; i += 2, x++){
		sum = sum + ( i / y );
		y *= 2;
	}
 	
 	printf("The sum of the sequence is: %.2f\n", sum);

	return 0;
}
