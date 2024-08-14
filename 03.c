/*

 	Example: The leaflet of a pediatric medicine recommends the following dosage: 5 drops for 	
 	every 2 kg of the child's weight. Create a program that reads the child's weight and shows 
 	the number of drops to be administered.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/


#include<stdio.h>

int main() {
	int drops = 5;
	float kg, answer;
	
	printf("Enter the child's weight: ");
	scanf("%f", &kg);
	
	answer = (kg / 2.0) * 5;
	
	printf("The number of drops will be administered: %.2f", answer);

	return 0;
}
