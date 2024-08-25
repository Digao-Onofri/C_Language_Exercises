/*

 	Example: Write a program that reads a positive integer N and show it divisors.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
int main()
{
	int n, i;
	
	printf("Enter an integer:\n");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%d ", i);
		}				
	}
	
	printf("\n");
	
	return 0;
}
