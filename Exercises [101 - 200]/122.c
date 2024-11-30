/*

 	Example:  Make a program that reads from the user a number N and dynamically allocates an 
 	array of N Positions. Using pointer arithmetic, read the array and show how many of the 
 	stored numbers are even and how many are odd. 
 	Youtube lesson: https://youtu.be/g_ZY9lP2akM
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<stdlib.h>
int main() {
	int a;
	int i, *v, even = 0, odd = 0;
	
	printf("Enter an integer:\n");
	scanf("%d", &a);
	
	v = (int *) malloc(a * sizeof(int));
	
	printf("Enter the values of array (a):\n");	
	//reading the values of array a
	for(i = 0; i < a; i++){
		scanf("%d", (v + i));
	}
	
	//checking amount of even and odd
	for(i = 0; i < a; i++){
		if(*(v + i) % 2 == 0){ 
			even++;
		}
		else{ 
			odd++;
		}
	}
	
	printf("Amount of even: %d\n", even);
	printf("Amount of odds: %d\n", odd);

	//free the memory allocated for the array v
	free(v);
	
	return 0;
}
