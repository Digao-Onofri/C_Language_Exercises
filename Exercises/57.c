/*

	Example: Write a program that reads 10 integers and stores them in a vector. Next, print the 
 	largest and smallest values ​​in the vector. 
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
	int vector[MAX], i, largest, smallest;
	
	printf("Enter %d integers:\n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%d", &vector[i]);
	}
	
	largest = vector[0];
	smallest = vector[0];
	
	
	for(i = 0; i < MAX; i++){
		if(largest < vector[i]){
			largest = vector[i];
		}
		if(smallest > vector[i]){
			smallest = vector[i];
		}
	}
	
	printf("Largest value is: %d\n", largest);
	printf("Smallest value is: %d\n", smallest);
	
	return 0;	
}
