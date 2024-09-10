/*

 	Example:  Do a function that takes a value N and return the value of the sum of the first N 
 	terms of the series: S = 0 + 1/2! + 2/4! + 3/6! + 4/8! + ... The code must also declare a 
 	function that computes the factorial and is used by the function of the series. In Moodle, 
 	enter only your functions, which should have the following signatures: long long int 
 	factorial(int x) double serie(int n) 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>

long long int fatorial(int x);
double serie(int n);

int main() {
	int n;
	float answer;
	
	scanf("%d", &n);
	
	answer = serie(n);
	
	printf("%f", answer);

	return 0;
}
long long int fatorial(int x) {
	long long int fat = 1;
	int i;
	
	for(i = 1; i <= x; i++) {
		fat = fat * i;
	}
			
	return fat;
}

double serie(int n) {
	int i;
	double serie = 0;
	
	for(i = 0; i < n; i++) {
		serie = serie + (double) i / (long long int)fatorial(i * 2);
	}
	
	return serie;
}
