/*

 	Example:  Make a program that reads 10 integers and stores them in a array. Next, read an X 
 	value and print it what are the multiple elements of an integer that are present in the array. 
 	Youtube lesson: https://youtu.be/VUburIRgStA
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define MAX 10
int main()
{
	int array[MAX], i, integer;
	
	for(i = 0; i < MAX; i++){
		printf("Enter the value placed in the position [%d]\n", i);
		scanf("%d", &array[i]);
	}

	printf("Enter an integer number: ");
	scanf("%d", &integer);
	
	printf("The multiples of x in the vector are: ");
	
	for(i = 0; i < MAX; i++){
		if(integer % array[i]  == 0){
			printf("%d ", array[i]);
		}
	}
	
	printf("\n");

	return 0;
}
