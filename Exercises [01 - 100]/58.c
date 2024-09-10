/*

 	Example: Write a program, that reads 6 integer values and stores them in a array. Next, 
 	print the reverse of the array.
 	Youtube lesson: https://youtu.be/NC8NvEvYMXo
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define MAX 6
int main()
{
	int vector[MAX], i;

	printf("Enter the %d integer values:\n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%d", &vector[i]);
	}
	
	printf("The reverse of the vector is:\n");
	
	for(i = MAX - 1; i >= 0; i--){
		printf("%d ", vector[i]);
	}
	
	printf("\n");
	
	return 0;
}	
