/*

 	Example:  Do a function that takes a value N and return the value of the sum of the first N 
 	terms of the series: S = 0 + 1/2! + 2/4! + 3/6! + 4/8! + ... The code must also declare a 
 	function that computes the factorial and is used by the function of the series.
 	Youtube lesson: https://youtu.be/a4DSDat-pz4
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>

long long int factorial(int x);
double serie(int n);

int main() {
	int n;
	float answer = 0;
	
	printf("Enter an integer:\n");
	scanf("%d", &n);
	
	answer = serie(n);
	
	printf("%f\n", answer);

	return 0;
}
long long int factorial(int x) {
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
		serie = serie + (double) i / (long long int)factorial(i * 2);
	}
	
	return serie;
}
