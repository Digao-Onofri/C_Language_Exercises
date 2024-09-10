/*

 	Example: The price of a new car is calculated by adding the manufacturing cost to the 
 	distribution percentage and taxes (incidences on the factory cost). Thinking that the 
 	distribution percentage will be 28% and taxes will be 45%, create a program that reads the 
 	factory cost and shows the final price of the car.
 	Youtube lesson: https://youtu.be/CSGPcpqJxgs
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main() {
	float cost, finalvalue;
	
	printf("Enter the price of the factory cost: ");
	scanf("%f", &cost);
	
	finalvalue = cost + ((cost * 173) / 100.0);

	printf("The final value is %.2f\n", finalvalue);
	
	return 0;
}
