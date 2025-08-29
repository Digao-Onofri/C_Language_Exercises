/*

 	Example:  Make a program that reads 6 integers and stores them in an array A. Read another 6 
 	integers and store them on a array B. Next, print on a single line, the elements of array 
 	A that are not present in the array B, separated from each other by a single space. 
 	Youtube lesson: https://youtu.be/eeMZyXPkFF4
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define MAX 6
int main()
{
	int a[MAX], b[MAX], i, j, repeat;
	
	for(i = 0; i < MAX; i++){
		printf("Enter the value placed in the position a[%d]\n", i);
		scanf("%d", &a[i]);
	}

	printf("--------\n");

	for(j = 0; j < MAX; j++){
		printf("Enter the value placed in the position b[%d]\n", j);
		scanf("%d", &b[j]);
	}
	
	printf("The values that just appears in the array a are: \n");
	//checks if the value is just in the array a
	for(i = 0; i < MAX; i++){
		repeat = 0;
		for(j = 0; j < MAX; j++){
			if(a[i] == b[j]){
				repeat = 1;
				break;
			}
		}
		if(repeat == 0){
			printf("%d ", a[i]);
		}
	}
	
	printf("\n");

	return 0;
}
