/*

 	Example:  Make a program that reads an integer X and shows the difference between the square 
 	of the sum by the sum of the squares of the first X natural numbers. Example: Let X = 10: 
 	Square of sum: (1 + 2 + ... + 10)2 = (55)2 = 3025 Sum of squares: (12 + 22 + ... + 102) = 
 	385 Difference: 3025 – 385 = 2640 
 	Youtube lesson: https://youtu.be/2qbsjk3TMJ0
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x, i, square_sum = 0, sum_squares = 0;
	
	printf("Enter an integer:\n");
	scanf("%d", &x);
	
	for(i = 1; i <= x; i++){
		square_sum += i;
		sum_squares += pow(i, 2);
	}
	
	printf("Diference is equal: %.0f\n", pow(square_sum, 2) - sum_squares);
	
	
	return 0;
}
