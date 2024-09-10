/*

 	Example: Write a program, which reads 10 real values and stores them in a array. Next, 
 	search for positive numbers and calculate their sum.
 	Youtube lesson: https://youtu.be/4uKIYXRBQso
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define MAX 10
int main()
{
	int i;
	float vector[MAX], sum;
	
	printf("Enter %d real values: \n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%f",&vector[i]);
	}
	
	for(i = 0; i < MAX; i++){
		if(vector[i] >= 0) {
			sum = sum + vector[i];	
		}
	}
	
	printf("Sum of the positive numbers in the vector: %.2f\n", sum);

	return 0;
}
