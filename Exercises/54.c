/*

 	Example:  Make a program that reads 10 integers and stores them in a array A. Then, in a 
 	array B, store them the square of each element present in A. Next, print the array B.
 	Youtube lesson: https://youtu.be/sHV4jWAPdAQ
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define MAX 10
int main()
{
	int a[MAX], b[MAX], i;
	
	printf("Enter %d entire numbers:\n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%d", &a[i]);
	}
	
	printf("The square of those values are: \n");
	
	for(i = 0; i < MAX; i++){
		b[i] = a[i] * a[i];
		printf("%d ", b[i]);
	}
	
	printf("\n");

	return 0;
}
