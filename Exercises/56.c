/*

 	Example: Write a program that reads 10 integers and stores them in a vector. Count how much
 	even numbers that this vector has.
 	Youtube lesson: https://youtu.be/WpYiV-72AsA
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define MAX 10
int main()
{
	int vector[MAX], i, even;
	
	printf("Enter %d integers:\n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%d", &vector[i]);
	}
	
	for(i = 0, even = 0; i < MAX; i++){
		if(vector[i] % 2 == 0){
			even++;
		}
	}

	printf("Amount of even numbers in the vector is: %d\n", even);
	
	return 0;
} 
