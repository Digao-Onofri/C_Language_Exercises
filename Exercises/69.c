/*

 	Example:  Make a program that reads 8 integers representing the enrollment number of the 
 	students and stores them in a array. Next, read 8 real values, representing the heights of 
 	these students and store them in an array. Show the student's registration number of the
 	lowest, do the same for the tallest student. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>
#define MAX 8
int main()
{
	int integer[MAX], i, j, place_tallest, place_lowest;
	float real[MAX], tallest, lowest;
	
	printf("Enter the enrollment number of %d students: \n", MAX);
	
	for(i = 0; i < MAX; i++){	
		scanf("%d", &integer[i]);
	}
	
	printf("Enter the heights of these %d students: \n", MAX);
	
	for(j = 0; j < MAX; j++){
		scanf("%f", &real[j]);
	}
	
	tallest = real[0];
	lowest = real[0];
	
	for(i = 0; i < MAX; i++)
	{
		for(j = 0; j < MAX; j++)
		{
			if(tallest < real[j]){
				tallest = real[j];
				place_tallest = j;
			}	
			if(lowest > real[j]){
				lowest = real[j];
				place_lowest = j;
			}
			
		}
	}

	printf("Enrollment number and the height of the tallest are: %d %.2f\n", integer[place_tallest], tallest);
	printf("Enrollment number and the height of the lowest are: %d %.2f\n", integer[place_lowest], lowest);
	
	return 0;
}
