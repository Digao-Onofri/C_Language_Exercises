/*

 	Example:  Make a program that reads an N number and shows the sum of the first N terms of 
 	the following expression, accurate to two decimal places: S = – 1 + 1/2 – 1/3 + 1/4 – 1/5 
 	+ ... + 1/N. 
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
	int n, i, signal = 1;
	float sum = 0;

	printf("Enter an integer:\n");
	scanf("%d", &n);

	for(i = 1; i <= n; i++){
		signal *= -1;
		sum = sum + (1.0 / i) * signal;
	}

 	printf("The sum of the sequence is: %.2f\n", sum);
 	
	return 0;
}
