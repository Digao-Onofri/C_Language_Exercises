/*

 	Example: Write a program that reads 10 notes (real values) and stores them in a 
 	array. Next, print the average of the grades.
 	Youtube lesson: https://youtu.be/QFGPSh3YXqo
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
  
*/
#include<stdio.h>
#define MAX 10
int main()
{
	int i;
	float array[MAX], sum = 0;
	
	printf("Enter the grades:\n");
	
	for(i = 0; i < MAX; i++){
		scanf("%f", &array[i]);
	}	
	
	for(i = 0; i < MAX; i++){
		sum = sum + array[i];
	}
		
	printf("The average of the grades is: %.2f\n", sum / MAX);
	
	return 0;
}
