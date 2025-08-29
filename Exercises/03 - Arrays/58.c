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
	int array[MAX], i;

	printf("Enter the %d integer values:\n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%d", &array[i]);
	}
	
	printf("The reverse of the array is:\n");
	
	for(i = MAX - 1; i >= 0; i--){
		printf("%d ", array[i]);
	}
	
	printf("\n");
	
	return 0;
}	
