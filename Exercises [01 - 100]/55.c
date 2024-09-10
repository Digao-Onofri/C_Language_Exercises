/*

 	Example:  Make a program that reads 8 integers and stores them in a array. Next, read two 
 	integers X and Y. At the end, show the sum of the array elements that are in the X and Y 
 	positions.
 	Youtube lesson: https://youtu.be/LSkDeMFZzwA
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define MAX 8
int main()
{
	int vector[MAX], i, integer, integer1, sum = 0;
	
	printf("Enter an integer:\n");
		
	for(i = 0; i < MAX; i++){
		scanf("%d", &vector[i]);
	}
	
	printf("Enter the integer value of x and y:\n");
	scanf("%d %d", &integer, &integer1);
	
	for(i = 0; i < MAX; i++){
		if(i == integer || i == integer1){
			sum += vector[i];
		}
	}
	
	printf("The sum of the value on the position %d and %d in the vector is: %d\n", integer, integer1, sum);
	
	return 0;
}
