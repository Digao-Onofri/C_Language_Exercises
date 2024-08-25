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
	int n[MAX], i, largest, smallest;
	
	printf("Enter 10 integers:\n");
	
	for(i = 0; i < MAX; i++){
		scanf("%d", &n[i]);
	}
	
	largest = n[0];
	smallest = n[0];
	
	
	for(i = 0; i < MAX; i++){
		if(largest < n[i]){
			largest = n[i];
		}
		if(smallest > n[i]){
			smallest = n[i];
		}
	}
	
	printf("Largest value is: %d\n", largest);
	printf("Smallest value is: %d\n", smallest);
	
	return 0;	
}
