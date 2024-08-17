/*

 	Example: The capacity of a cylinder is measured by the following formula: V = pi*r*2*h, 
 	where r is the radius and h is the height. Write a program that reads the values ​​of 	
 	radius and height and calculate the volume of the cylinder.
 	Youtube lesson: https://youtu.be/cvrqGKkctwE
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

#include<stdio.h>
#include<math.h>  //pi = M_PI or acos(-1)

int main() {
	float radius, height;

	printf("Enter the radius and height values:\n");
	scanf("%f %f", &radius, &height);
	
	printf("The capacity will be: %.2f\n", acos(-1) * pow(radius, 2) * height);

	return 0;
}
