/*

 	Example: The sphere capacity is calculate by the following formula v =(4*pi*r*3) / 3, which 
 	r is the radius. Make program that reads the radius value, calculate and print the sphere 
 	capacity.
 	Youtube lesson: https://youtu.be/64uDv3X4NS8
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<math.h> //M_PI or acos(-1)
int main() {
	float radius;
	
	printf("Enter the radius value: ");
	scanf("%f", &radius);
	
	printf("The sphere capacity is: %.2f\n", (4 * acos(-1) * pow(radius,3) / 3);

	return 0;
}
