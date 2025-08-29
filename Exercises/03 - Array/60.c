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
	float array[MAX], sum;
	
	printf("Enter %d real values: \n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%f",&array[i]);
	}
	
	for(i = 0; i < MAX; i++){
		if(array[i] >= 0) {
			sum = sum + array[i];	
		}
	}
	
	printf("Sum of the positive numbers in the array: %.2f\n", sum);

	return 0;
}
