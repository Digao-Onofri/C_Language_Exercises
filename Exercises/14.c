/*

 	Example: A hotel contains 80 rooms and wants to run a special vacation promotion, which 
 	give a percentage of 25% of the daily rental value. Make a program that reads the normal 	
 	price, calculate and print the rental sale value.
 	Youtube lesson: https://youtu.be/VaY2SNbgRi4
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/


#include<stdio.h>
#include<math.h>

int main() {
	float price;
	
	printf("Enter the rental price: ");
	scanf("%f", &price);

	printf("The new rental price with the discount is: %.2f\n", (price * 75) / 100.0);

	return 0;
}
