/* 
 	Example: Make a program to calculate the discount value of a product paid in cash. The
 	program should read the normal price and the discount percentage (integer
 	between 0 and 100). Print the new price with the discount redution.
 	Youtube lesson: https://youtu.be/1WWHjI7ugKc
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
*/
#include<stdio.h>
int main() {
	float price, answer;
	int percentage;
	
	printf("Enter the price of the product: ");
	scanf("%f", &price);
	
	printf("Enter the percetage of discount: ");
	scanf("%d", &percentage);
	
	answer = price - (price * percentage / 100.0);
	
	printf("The new price with the discount will be: %.2f", answer);

	return 0;
}
