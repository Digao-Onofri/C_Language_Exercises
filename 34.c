/*

 	Example: Write a program, which read the height and weight and calculate the BMI.
 	Youtube lesson: https://youtu.be/nnsKNXXj8pQ
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
	float height, weight;
	
	printf("Enter your height:\n");
	scanf("%f", &height);
	
	printf("Enter your weight:\n");
	scanf("%f", &weight);
	
	printf("Your BMI is %.2f\n", weight / pow(height, 2));


	return 0;
}
