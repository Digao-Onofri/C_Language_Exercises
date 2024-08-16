/*

 	Example: To light a room, a power of 18W is required per m2. Write a program that reads the 
 	dimensions of the room in meters, and calculates the area in m2. Next, show the amount of 
 	power in watt this room will need to illuminate correctly
 	
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/


#include<stdio.h>

int main() {
	float sidea, sideb, m2, watt;
	
	printf("Enter the dimensions of the room in meters: \n");
	scanf("%f %f", &sidea, &sideb);
	
	m2 = sidea * sideb;
	watt = m2 * 18;
	
	printf("m2: %.2f\nwatt: %.2f\n", m2, watt);
	
	return 0;
}
