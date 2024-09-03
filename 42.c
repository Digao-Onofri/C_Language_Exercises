/*

 	Example: Write a program that reads two integers N and X. Next, show what are the first N
 	natural numbers that are multiples of X. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main()
{
	int n, x, i, aux;
	
	printf("Enter the value of N:\n");
	scanf("%d", &n);

	printf("Enter the value of X:\n");
	scanf("%d", &x);
	
	printf("The first %d multiples of X are: ", n);	
	
	for(i = 1, aux = 1; i <= x; i++){
		if(x % i == 0 && aux <= n){
			printf("%d ", i);
			aux++;
		}
	}
		
	printf("\n");
		
	return 0;
}
