/*

 	Example: Write a program which reads an integer N and show the first N odd numbers.
 	Youtube lesson: https://youtu.be/Bnn3oJLpZ7s
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

#include<stdio.h>
//start of the program
int main()
{
	int n, i;
	
	printf("Enter an integer number:\n");
	scanf("%d", &n);
	
	i = 1;
	
	while(n >= 1){	
		printf("%d ", i);
		n--;
		i += 2;
	}

	return 0;
}
