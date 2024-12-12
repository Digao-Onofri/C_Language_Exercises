/*

 	Example:   Make a function that takes a number N and returns the number of prime numbers 
 	smaller than existing N. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>

int primes(int n);

int main() {
	int n, answer;
	
	printf("Enter an integer:\n");
	scanf("%d", &n);
	
	answer = primes(n);

	printf("%d\n", answer);
		
	return 0;
}

int primes(int n) {
	int qtd = 0, i, j, check;
	
	for(i = 2; i <= n; i++) {  
		check = 0;
		for(j = 2; j < i; j++) {
			if(i % j == 0) {
				check++;
			}
		}
		if(check == 0) {
			qtd++;
		}
	}	

	return qtd + 1;
}
