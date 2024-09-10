/*

 	Example:  Make a function that takes a vector of integers and their size, and returns the 
 	value of the largest element present in the vector. In Moodle, enter only your role, which 
 	should have the following signature: int maxvet(int *vet, int n) 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>

int maxvet(int *vet, int n);

int main() {
	int *vet;
	int n, i, answer;
	
	scanf("%d", &n);
	
	vet = (int *)malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++) {
		printf("Enter the value of v[%d]\n", i);
		scanf("%d", (vet + i));
	}
	
	answer = maxvet(vet, n);
	
	printf("%d\n", answer);
	
	return 0;
}

int maxvet(int *vet, int n) {
	int i, maior; 
	
	maior = *(vet + 0);
	
	for(i = 0; i < n; i++) {
		if(maior < *(vet + i)) {
			maior = *(vet + i);
		}
	}

	return maior;
}
