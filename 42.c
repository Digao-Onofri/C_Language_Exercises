/*

 	Example: Write a program that reads two integers N and X. Next, show what are the first N
 	natural numbers that are multiples of X. 
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
	int n, x, i, aux;
	
	printf("Enter two entire numbers:\n");
	scanf("%d %d", &n, &x);
	
	printf("Multiples of X are: ");	
	
	for(i = 1, aux = 1; i <= x; i++){
		if(x % i == 0 && aux <= n){
			printf("%d ", i);
			aux++;
		}
	}
		
	printf("\n");
		
	return 0;
}
