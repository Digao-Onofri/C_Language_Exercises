/*

 	Example: Write a program that reads the diameter of a ball and three dimensions of a 
 	box (height, length, depth). Print whether the ball fits in the box.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<math.h>
int main()
{
	float diameter , lenght, height, depth;
	
	printf("Enter the ball diameter:\n");
	scanf("%f", &diameter);
	
	printf("Enter the three side values of the box:\n");
	scanf("%f %f %f", &lenght, &height, &depth);
	
	if(diameter <= lenght && diameter <= height && diameter <= depth){
		printf("fits on the box\n");	
	}
	else {
		printf("Not fits on the box\n");
	}
	
	return 0;
}
