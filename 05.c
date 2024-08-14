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






















/* 	Example: A group of friends want to rent a car. They checked two agencies, the first 
 	charges $62 per day and $1.4 per mile traveled. The second charges $80 per day and $1.2 
 	per mile traveled. Make a program that reads the number of miles to be covered and the 
 	amount of car rental days. Afterwards, show the lowest price between the two agencies as 
 	an answer.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	*/
