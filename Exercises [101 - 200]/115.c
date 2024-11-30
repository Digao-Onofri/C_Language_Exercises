/*

 	Example:  Declare an array of integers with 10 positions, read and store values at each 
 	position. Then, using an int pointer, add one unit to each position of the array. Print the 
 	array before and after the modification. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	int array[10], i;
	int *p;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &array[i]);
	}
	
	printf("\n");
	printf("After adding 1 to each value:\n");
	
	//adding 1 to each position
	for(i = 0; i < 10; i++){	
		p = &array[i];
		*p = *p + 1;
		printf("%d ", array[i]);
	}
	
	printf("\n");
	return 0;
}
