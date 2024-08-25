/*

 	Example:  Make a program that reads 8 integers and stores them in a vector. Next, read two 
 	integers X and Y. At the end, show the sum of the vector elements that are in the X and Y 
 	positions.
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
	int a[MAX], i, x, y, sum = 0;
	
	printf("Enter an integer:\n");
		
	for(i = 0; i < MAX; i++){
		scanf("%d", &a[i]);
	}
	
	printf("Enter the integer value of x and y:\n");
	scanf("%d %d", &x, &y);
	
	for(i = 0; i < MAX; i++){
		if(i == x || i == y){
			sum += a[i];
		}
	}
	
	printf("The sum of the position %d and %d in the vector is: %d\n", x, y, sum);
	
	return 0;
}
