/*

 	Example:   Make a function that takes an integer and returns the sum of its digits. 
 	Youtube lesson: https://youtu.be/TW0HV2AJ0qk
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>

int sum(int num);

int main() {
	int num = 0;
	int answer = 0;
	
	printf("Enter an number:\n");
	scanf("%d", &num);

	answer = sum(num);
	
	printf("The sum of the digits of %d is: %d\n", num, answer);

	return 0;
}

int sum(int num) {
	int sum = 0;
	
	while(num > 0) {
		sum += num % 10;
		num -= num % 10;
		num = num / 10;
	} 
		
	return sum;
}
