/*

 	Example:  Make a function that takes a number N and returns the sum of the digits from the 
 	factorial of N. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>

int sumfact(int n);

int main() {
	int n, answer = 0;

	printf("Enter an integer:\n");
	scanf("%d", &n);
 
 	answer = sumfact(n);
 
	printf("The sum of the digits from the factorial of %d is: %d\n", n, answer);
	
	return 0;
}

int sumfact(int n) {
	int sum = 0, i;
	long long int fat = 1;
	
	for(i = 1; i <= n; i++) {
		fat = fat * i; 
	}
	
	while(fat > 0) {
		sum += fat % 10;
		fat -= fat % 10;
		fat = fat / 10;
	}
	
	return sum;
}
