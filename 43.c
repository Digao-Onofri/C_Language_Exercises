/*

 	Example: Write a program that reads two integers and prints the even numbers in that range.
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
	int a, b, i;
	
	printf("Enter two integers:\n");
	scanf("%d %d", &a, &b);
	
	printf("The even numbers in the range %d-%d are:\n", a, b);
	
	for(i = a; i <= b; i++){
		if(i % 2 == 0){
			printf("%d ", i);
		}
	}
	
	printf("\n");

	return 0;
}
