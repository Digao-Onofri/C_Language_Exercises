/*

 	Example: Write a program, which reads 10 real values and stores them in a vector. Next, 
 	search for positive numbers and calculate their sum.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define MAX 10
//start of the program
int main()
{
	int i;
	float n[MAX], sum;
	
	printf("Enter 10 real values: \n");
	
	for(i = 0; i < MAX; i++){
		scanf("%f",&n[i]);
	}
	
	for(i = 0; i < MAX; i++){
		if(n[i] >= 0) {
			sum = sum + n[i];	
		}
	}
	
	printf("Sum of the positive numbers in vector: %.2f\n", sum);

	return 0;
}
