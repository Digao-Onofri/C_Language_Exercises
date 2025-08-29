/*

 	Example:  Make a program that reads 10 integers and stores them in an array. Then print in a 
 	single line the elements of the array, separated from each other by a single space, but 
 	eliminating repetitions of Elements. 
 	Youtube lesson: https://youtu.be/OG127ykjkF0
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h> 
#define MAX 10
int main()
{
	int array[MAX], i, j;
	
	for(i = 0; i < MAX; i++){
		printf("Enter the value placed in the position [%d]\n", i);
		scanf("%d", &array[i]);
	}
	
	for(i = 0; i < MAX; i++){
		for(j = i + 1 ; j < MAX; j++){
			if(array[i] == array[j]){
				array[i] = '*';	
			}
		}       
	}
	
	for(i = 0; i < MAX; i++){
		if(array[i] != '*'){
			printf("%d ", array[i]);
		}
	}
	
	printf("\n");
	
	return 0;
}
