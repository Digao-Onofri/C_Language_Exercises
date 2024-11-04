/*

 	Example:  Declare an array of integers with 10 positions, read and store values at each 
 	position. Below Using an int pointer, display the address and contents of each position in 
 	the array. 
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
	void *j;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < 10; i++){
		j = &array[i];
		p = &array[i];
		printf("Adress: %p - Value: %d\n", j, *p);
	}
	
	return 0;
}
