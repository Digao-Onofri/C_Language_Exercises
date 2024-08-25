/*

 	Example: Write a program that reads the length of three sides of the triangle and displays 
 	the type of the triangle. Equilateral, isosceles or scalene.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
//start of the program
int main()
{
	float sidea, sideb, sidec;
	printf("Enter the measurement of the three sides:\n");
	scanf("%f %f %f", &sidea, &sideb, &sidec);
	if(sidea == sideb && sideb == sidec){
		printf("Equilateral\n");
	}
	else if(sidea != sideb && sideb == sidec){
		printf("isosceles\n");
	}
	else if(sidea != sideb && sideb != sidec){
		printf("Scalene\n");
	}
	
	return 0;
}
