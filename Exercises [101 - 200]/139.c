/*

 	Example:  Make a function that takes an array of integers and their size, and returns the 
 	average of its elements.
 	Youtube lesson: https://youtu.be/Bi-JZ37jSLw
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<stdlib.h>

double avgarray(int *array, int n);

int main() {
	int *array;
	int n, i;
	double answer = 0;
	
	printf("Enter a size:\n");
	scanf("%d", &n);
	
	array = (int *)malloc(n * sizeof(int));
	if(array == NULL){
		exit(1);
	}
	
	printf("Enter %d values:\n", n);
	for(i = 0; i < n; i++) {
		scanf("%d", (array + i));
	}

	answer = avgarray(array, n);
	
	printf("The average of the values in the array: %.2lf\n", answer);
	free(array);

	return 0;
} 

double avgarray(int *array, int n) {
	int i;
	double answer = 0;
	
	for(i = 0; i < n; i++) {
		answer = answer + (double) *(array + i) / n;
	}

	return answer;
}
