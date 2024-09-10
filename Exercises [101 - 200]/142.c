/*

 	Example:  Make a function that takes an N value and two vectors of size N. The function must 
 	allocate a third vector, formed by the sum of the two received vectors, and return it to 
 	main. Finally, the main prints the sum vector, with one element being separated from the 
 	other by a single space. Use only pointer arithmetic, that is, make this program without 
 	using square brackets. The main must read the value N, allocate and read the two vectors. In 
 	Moodle, enter your full program (main + roles). 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>
#include<stdlib.h>

int *aloca(int n, int *a, int *b);

int main() {
	int n, i;
	int *a, *b, *answer;
	
	scanf("%d", &n);
	
	a = (int *)malloc(n * sizeof(int));
	b = (int *)malloc(n * sizeof(int));
	
	if(a == NULL) exit(1);
	if(b == NULL) exit(1);
	
	
	//reading a
	for(i = 0; i < n; i++) {
		scanf("%d", (a + i));
	}
	
	//reading b
	for(i = 0; i < n; i++) {
		scanf("%d", (b + i));
	}

	answer = aloca(n, a, b);
		
	for(i = 0; i < n; i++) {		
		printf("%d ", *(answer + i));
	}
	
	free(a);
	free(b);
	free(answer);
	
	return 0;
}

int *aloca(int n, int *a, int *b) {
	int i;
	int *c;
	
	c = (int *)malloc(n * sizeof(int));
	
	if(c == NULL) exit(1);
	
	for(i = 0; i < n; i++) {
		*(c + i) = *(a + i)  + *(b + i);
	}
	
	return c;
}	
