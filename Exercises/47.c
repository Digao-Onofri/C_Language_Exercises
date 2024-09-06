/*

 	Example:  Make a program that reads a positive integer N and shows the sum of its divisors. 	
 	For example, the The sum of the divisors of 30 is 1 + 2 + 3 + 5 + 6 + 10 + 15 + 30 = 72. 
 	Don't let the user enter a value negative. 
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
	int n, i, sum;
	
	do{	
		printf("Enter a positive integer:\n");
		scanf("%d", &n);
	}while(n < 0); //avoid the user enter a negative number
	
	for(i = 1; i <= n; i++){
		if(n % i == 0){
			sum += i;
		}
	}
	
	printf("The sum of the divisors of %d is: %d\n", n, sum);
	
	return 0;
}
