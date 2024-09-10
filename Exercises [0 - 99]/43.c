/*

 	Example: Write a program that reads two integers and prints the even numbers in that range.
 	Youtube lesson: https://youtu.be/WF2CRcF1kRY
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
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
