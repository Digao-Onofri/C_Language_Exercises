/*

 	Example:  Write a program that declares two int arrays of size M and N (informed by the 
 	user), reads their elements, and, using only pointer arithmetic, computes and shows: a) the 
 	union of their elements. b) the intersection. c) the difference from the first array to 
 	the second. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>
int main() {
	int a, b;
	int *v1, *v2;
	int i, j, check = 0;
	
	printf("Enter the size of array (a) and (b):\n");
	scanf("%d %d", &a, &b); 
	
	v1 = (int *) malloc(a * sizeof(int));
	v2 = (int *) malloc(b * sizeof(int));	
	
	printf("Enter the values of array (a):\n");	
	for(i = 0; i < a; i++) {
		scanf("%d", (v1 + i));
	}
	
	printf("Enter the values of array (b):\n");
	for(j = 0; j < b; j++) {
		scanf("%d", (v2 + j));
	}
	
	printf("Union: ");
	//printing the union of the elements
	for(i = 0; i < a; i++) {
		printf("%d ", *(v1 + i));
	}

	for(j = 0; j < b; j++) { 
		check = 0;
		for(i = 0; i < a; i++) {
			if(*(v1 + i) == *(v2 + j)) {
				check = 1;
			}
		}
		if(check == 0){
			printf("%d ", *(v2 + j));
		}
	}
	
	printf("\n");
	
	printf("Intersection: ");
	//calculating the intesection of the elements
	for(i = 0; i < a; i++) {
		for(j = 0; j < b; j++) {
			if(*(v1 + i) == *(v2 + j)){
				printf("%d ", *(v1 + i));	
			}
		}
	}
	
	printf("\n");
	
	printf("Difference: ");
	//calculating the difference between arrays
	for(i = 0; i < a; i++) {
		check = 0;
		for(j = 0; j < b; j++) {
			if(*(v1 + i) == *(v2 + j)){
				check = 1;	
			}
		}
		if(check == 0){
			printf("%d ", *(v1 + i));
		}
	}

	printf("\n");
	
	free(v1);
	free(v2);
	
	return 0;
}
