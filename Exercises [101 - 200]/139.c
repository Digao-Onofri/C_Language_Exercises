/*

 	Example:  Make a function that takes a vector of integers and their size, and returns the 
 	average of its elements. In Moodle, enter only your role, which should have the following 
 	signature: double avgvet(int *vet, int n) 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>

double avgvet(int *vet, int n);

int main() {
	int *vet;
	int n, i;
	double answer;
	
	scanf("%d", &n);
	
	vet = (int *)malloc(n * sizeof(int));
	
	for(i = 0; i < n; i++) {
		printf("Enter the value of v[%d]:\n", i);
		scanf("%d", (vet + i));
	}

	answer = avgvet(vet, n);
	
	printf("%lf", answer);

	return 0;
}

double avgvet(int *vet, int n) {
	int i;
	double answer;
	
	for(i = 0; i < n; i++) {
		answer = answer + (double) *(vet + i) / n;
	}

	return answer;
}
