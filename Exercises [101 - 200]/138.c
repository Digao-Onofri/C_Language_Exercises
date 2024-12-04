/*

 	Example:  Make a function that takes a array of integers and their size, and returns the 
 	value of the largest element present in the array. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>

int maxarray(int *array, int n);

int main() {
	int *array;
	int n, i, answer;
	
	printf("Enter a size: \n");
	scanf("%d", &n);
	
	array = (int *)malloc(n * sizeof(int));
	if(array == NULL){
		exit(1);
	}

	printf("Enter %d values:\n", n);
	for(i = 0; i < n; i++) {
		scanf("%d", (array + i));
	}
	
	answer = maxarray(array, n);
	
	printf("Biggest value in the array is: %d\n", answer);
	free(array);

	return 0;
}

int maxarray(int *array, int n) {
	int i, biggest; 
	
	biggest = *(array + 0);
	
	for(i = 0; i < n; i++) {
		if(biggest < *(array + i)) {
			biggest = *(array + i);
		}
	}

	return biggest;
}
