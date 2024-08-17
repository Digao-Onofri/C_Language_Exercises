/*

 	Example: Write a program that reads 5 values and print the smallest
 	Youtube lesson: https://youtu.be/M-rIRe7h7NM
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

#include<stdio.h>
#define MAX 5

int main() {
	int v[MAX];
	int i, smallest;
	
	for(i = 0; i < MAX; i++) {
		printf("Enter an integer number: ");
		scanf("%d", &v[i]);
	}
	
	v[i] = '\0'; //When the i is 5, the vector will need to be finished
	
	smallest = v[0];
	
	for(i = 0; i < MAX; i++) {
		if(smallest > v[i]) {
			smallest = v[i];
		}
	}
	
	printf("The smallest value is: %d\n", smallest);
	
	return 0;
}
