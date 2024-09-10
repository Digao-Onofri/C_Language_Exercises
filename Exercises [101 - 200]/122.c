/*

 	Example:  Make a program that reads from the user a number N and dynamically allocates a 
 	vector of N Positions. Using pointer arithmetic, read the vector and show how many of the 
 	stored numbers are even and how many are odd. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	int i, *v, par, impar;
	
	printf("Enter an integer:\n");
	scanf("%d", &a);
	
	v = malloc(a * sizeof(int));
	
	printf("Enter the values of array (a):\n");	
	//reading the values of array a
	for(i = 0; i < a; i++){
		scanf("%d", (v + i));
	}
	
	//checking amount of pairs and odd
	for(i = 0; i < a; i++){
		if(*(v + i) % 2 == 0) par++;
		else impar++;
	}
	
	printf("Amount of pairs: %d\n", par);
	printf("Amount of odds: %d\n", impar);
	
	return 0;
}
