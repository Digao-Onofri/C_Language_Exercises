/*

 	Example:  Make a function that takes two values A and B and returns the sum of the values in 
 	the range [A, B]. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>

int sum(int a, int b);

int main() {
	int a, b, answer  = 0;
	
	printf("Enter two values:\n");
	scanf("%d %d", &a, &b);

	answer = sum(a, b);
	
	printf("The sum of the values in range [%d, %d] is: %d\n", a, b, answer);
	
	return 0;
}

int sum(int a, int b) {
	int i, sum = 0;
	
	for(i = a; i <= b; i++) {
		sum = sum + i;
	}
	
	return sum;
}
