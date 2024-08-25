/*

 	Example: Write a program which reads an integer N and show the first N odd numbers.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
//start of the program
int main()
{
	int n, i;
	
	printf("Enter an entire number:\n");
	scanf("%d", &n);
	
	i = 1;
	
	while(n >= 1){	
		printf("%d ", i);
		n--;
		i += 2;
	}

	return 0;
}
