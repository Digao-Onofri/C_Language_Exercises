/*

	Example: Write a program that reads an integer and displays, as an answer, the sum of it 	
	cube root with it fourth root. Consider two decimal places.
 	Youtube lesson: https://youtu.be/KTLnp6uXmhc
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<math.h>
int main() {
	int integer;
	float answer;
	
	printf("Enter an integer: ");
	scanf("%d", &integer);
	
	answer = sqrt(sqrt(integer)) + cbrt(integer);
	
	printf("The sum is: %.2f\n", answer);
	
	return 0;
}
