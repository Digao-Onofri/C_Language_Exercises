/*

	Example: Write a program that reads 10 integers and stores them in an array. Next, print the 
 	largest and smallest values ​​in the array. 
 	Youtube lesson: https://youtu.be/0QgivxtJ5GQ
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define MAX 10
int main()
{
	int array[MAX], i, largest, smallest;
	
	printf("Enter %d integers:\n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%d", &array[i]);
	}
	
	largest = array[0];
	smallest = array[0];
	
	
	for(i = 0; i < MAX; i++){
		if(largest < array[i]){
			largest = array[i];
		}
		if(smallest > array[i]){
			smallest = array[i];
		}
	}
	
	printf("Largest value is: %d\n", largest);
	printf("Smallest value is: %d\n", smallest);
	
	return 0;	
}
