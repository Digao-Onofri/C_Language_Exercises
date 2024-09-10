/*

 	Example: One of the alternative ways for calculating the area of ​​a triangle is Heron's 
 	Formula, which gives the value of the area as a function of the measurement of the three 
 	sides of the triangle. The formula is given by 𝐴 = √𝑝(𝑝 − 𝑎)(𝑝 − 𝑏)(𝑝 − 𝑐), where a, b and c 
 	are the measurements of the sides and p is the semiperimeter (half of the perimeter). Write 
 	a program that reads the measurements of the sides of the triangle and shows the value of 
 	its area.
 	Youtube lesson:  https://youtu.be/VBPunoTIwA8
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<math.h>
int main() {
	int sidea, sideb, sidec;
	float area, semiperimeter;
	
	printf("Enter the three triangle sides: \n");
	scanf("%d %d %d", &sidea, &sideb, &sidec);
	
	semiperimeter = (sidea + sideb + sidec) / 2.0;
	
	area = sqrt(semiperimeter * (semiperimeter - sidea) * (semiperimeter - sideb) 
	* (semiperimeter - sidec));
	
	printf("The triangle area is %.1f\n", area);

	return 0;
}
