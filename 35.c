/*

 	Example: Write a program that checks whether the number read is divisible by 3 or 5, but not 	
 	by both.
 	Youtube lesson: https://youtu.be/8N4DMAc0zHY
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
int main()
{
	int integer;
	
	printf("Enter an integer number:\n");
	scanf("%d", &integer);
	
	if(integer % 3 == 0 && integer % 5 == 0) {
		printf("Divisible by the 3 and 5\n");
	}
	else if(integer % 3 == 0){
		printf("Divisible by 3\n");
	}
	else if(integer % 5 == 0){
		printf("Divisible by 5\n");
	}
	
	return 0;
}
