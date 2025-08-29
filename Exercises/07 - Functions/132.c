/*

 	Example:  Make a function that takes a value N and returns the sum of the squares of the 
 	numbers 1 to N. 
 	Youtube lesson: https://youtu.be/rL8ls1-MSlo
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>

int squares(int n);

int main() {
	int n, sum;
	
	printf("Enter an integer:\n");
	scanf("%d", &n);
	
	sum = squares(n);
	
	printf("The sum of the squares of 1 to %d is: %d\n", n, sum);
	
	return 0;
}

int squares(int n) {
	int i, sum = 0;
	
	for(i = 1; i <= n; i++) {
		sum = sum + (i * i); 
	}
	
	return sum;
}
