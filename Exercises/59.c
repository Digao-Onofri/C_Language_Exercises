/*

 	Example: Write a program that reads 10 notes (real values) and stores them in a 
 	array. Next, print the average of the grades.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
*/
/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define MAX 10
int main()
{
	int i;
	float vector[MAX], sum = 0;
	
	printf("Enter the grades:\n");
	
	for(i = 0; i < MAX; i++){
		scanf("%f", &vector[i]);
	}	
	
	for(i = 0; i < MAX; i++){
		sum = sum + vector[i];
	}
		
	printf("The average of the grades is: %.2f\n", sum / MAX);
	
	return 0;
}
