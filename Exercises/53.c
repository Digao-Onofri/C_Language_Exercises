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
	int vector[MAX], i;
	
	printf("Enter %d values:\n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%d", &vector[i]);
	}
	
	printf("The numbers are:\n");
	
	for(i = 0; i < MAX; i++){ 
		printf("%d ", vector[i]); // you can also use printf("%s", vector) to print it
	} 
	
	printf("\n");
	
	return 0;
}
