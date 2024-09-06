/*

 	Example: Make a program that reads the angle value, in degress, and show, the values of sin, 
 	cos and tan.
 	Youtube lesson: https://youtu.be/3tRaUx6Akrw
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

#include<stdio.h>
#include<math.h>

int main() {
	int angle;

	printf("Enter the angle value: ");
	scanf("%d", &angle);

	printf("Sin:%f\nCos: %f\nTan: %f\n", sin(angle), cos(angle), tan(angle));

	return 0;
}
