/*

 	Example:   Make a function that takes mmm number N and returns the number of prime numbers 
 	smaller than existing N. In Moodle, enter only your role, which should have the following 
 	Signature: Int Qtdprimos(Int N) 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>

int qtdprimos(int n);

int main() {
	int n, answer;
	
	scanf("%d", &n);
	
	answer = qtdprimos(n);

	printf("%d\n", answer);
		
	return 0;
}

int qtdprimos(int n) {
	int qtd = 0, i, j, check;
	
	for(i = 2; i <= n; i++) {
		check = 0;
		for(j = 2; j <= i; j++) {
			if(i % j == 0) {
				check++;
			}
		}
		if(check == 1) {
			qtd++;
		}
	}	

	return qtd;
}
