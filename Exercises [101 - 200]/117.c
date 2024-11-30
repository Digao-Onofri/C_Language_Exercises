/*

 	Example:  Declare an array of integers with 10 positions, read and store values at each 
 	position. Then, using only int pointers, add one unit to the content of each position of the 
 	array if the content is even; multiply by 2 if it is odd. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
int main(){
	int array[10], *p, i;
	
	printf("Enter 10 values:\n");
	for(i = 0; i < 10; i++){
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < 10; i++){
		p = &array[i];
		if(*p % 2 == 0){ 
			*p = *p + 1;
			printf("Even (value + 1): %d\n", array[i]);
		}
		else{ 
			*p = *p * 2;
			printf("Odd  (value * 2): %d \n", array[i]);
		}
	}
	
	return 0;
}
