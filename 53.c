/*

 	Example:  Make a program that reads 6 integer values and stores them in a vector. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define MAX 6
int main()
{
	int n[MAX], i;
	
	printf("Enter %d values:\n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%d", &n[i]);
	}
	
	printf("The numbers are:\n");
	
	for(i = 0; i < MAX; i++){
		printf("%d ", n[i]);
	}
	
	printf("\n");
	
	return 0;
}
