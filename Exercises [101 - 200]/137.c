/*

 	Example:  Make a function that takes a number N and returns the sum of the digits from the 
 	factorial of N. In Moodle, Enter only your role, which should have the following signature: 
 	int somafat(int n) 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>

int somafat(int n);

int main() {
	int n, answer;

	scanf("%d", &n);
 
 	answer = somafat(n);
 
	printf("%d", answer);
	
	return 0;
}

int somafat(int n) {
	int soma = 0, i;
	long long int fat = 1;
	
	for(i = 1; i <= n; i++) {
		fat = fat * i; 
	}
	
	while(fat > 0) {
		soma += fat % 10;
		fat -= fat % 10;
		fat = fat / 10;
	}
	
	return soma;
}
