/*

 	Example:  Make a program that reads 10 integers and stores them in a vector A. Then, in a 
 	vector B, store them the square of each element present in A. Next, print the vector B.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define MAX 10
//start of the program
int main()
{
	int a[MAX], b[MAX], i;
	
	printf("Enter %d entire numbers:\n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%d", &a[i]);
	}
	
	for(i = 0; i < MAX; i++){
		b[i] = a[i] * a[i];
		printf("%d ", b[i]);
	}
	
	printf("\n");

	return 0;
}
