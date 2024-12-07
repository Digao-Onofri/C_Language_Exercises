/*

 	Example:  Make a function that takes an N value and two arrays of size N. The function must 
 	allocate a third array, formed by the sum of the two received arrays, and return it to 
 	main. Finally, the main prints the sum array, with one element being separated from the 
 	other by a single space. Use only pointer arithmetic, that is, make this program without 
 	using square brackets. The main must read the value N, allocate and read the two arrays.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>
#include<stdlib.h>

int *allocate(int n, int *a, int *b);

int main() {
	int n, i;
	int *a, *b, *answer;
	
	printf("Enter the size of the arrays:\n");
	scanf("%d", &n);
	
	a = (int *)malloc(n * sizeof(int));
	b = (int *)malloc(n * sizeof(int));
	
	if(a == NULL || b == NULL) {
		exit(1);
	}

	//reading a
	printf("Enter the values of the array a:\n");
	for(i = 0; i < n; i++) {
		scanf("%d", (a + i));
	}
	
	//reading b
	printf("Enter the values of the array b:\n");
	for(i = 0; i < n; i++) {
		scanf("%d", (b + i));
	}

	answer = allocate(n, a, b);
	
	printf("The sum of the values in the array a and b are:\n");
	for(i = 0; i < n; i++) {		
		printf("%d ", *(answer + i));
	}

	printf("\n");
	
	free(a);
	free(b);
	free(answer);
	
	return 0;
}

int *allocate(int n, int *a, int *b) {
	int i;
	int *c;
	
	c = (int *)malloc(n * sizeof(int));
	
	if(c == NULL) exit(1);
	
	for(i = 0; i < n; i++) {
		*(c + i) = *(a + i)  + *(b + i);
	}
	
	return c;
}	
