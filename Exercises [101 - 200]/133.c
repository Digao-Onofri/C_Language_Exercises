/*

 	Example:  Make a function that takes two values A and B and returns the sum of the values in 
 	the range [A, B]. In Moodle, enter only your role, which should have the following 
 	signature: int sum(int a, int b) 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>

int soma(int a, int b);

int main() {
	int a, b, answer;
	
	scanf("%d %d", &a, &b);

	answer = soma(a, b);
	
	printf("%d\n", answer);
	
	return 0;
}

int soma(int a, int b) {
	int i, soma;
	
	for(i = a; i <= b; i++) {
		soma = soma + i;
	}
	
	return soma;
}
