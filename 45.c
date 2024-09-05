/*

 	Example: Write a program, which reads two integers N and X and print sum of the 
 	multiples of X smaller than N.
 	Youtube lesson: https://youtu.be/c_mBm4IDNNQ
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main()
{
	int n, x, i, sum;
	
	printf("Enter the value of N:\n");
	scanf("%d", &n);
	
	printf("Enter the value of X:\n");
	scanf("%d", &x);
	
	for(i = 1, sum = 0; i <= x; i++){
		 if(x % i == 0 && i < n) {
		 	sum += i;
		 }
	}
	
	printf("The sum of the multiples smaller than N is: %d\n", sum);
	
	return 0;
}
