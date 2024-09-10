/*

 	Example:  Make a function that takes a value N and returns the sum of the squares of the 
 	numbers 1 to N. In Moodle, enter only your function, which should have the following 
 	signature: int squares(int n) 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

int quadrados(int n);

int main() {
	int n, soma;
	
	scanf("%d", &n);
	
	soma = quadrados(n);
	
	printf("%d", soma);
	
	return 0;
}

int quadrados(int n) {
	int i, soma = 0;
	
	for(i = 1; i <= n; i++) {
		soma = soma + (i * i); 
	}
	
	return soma;
}
