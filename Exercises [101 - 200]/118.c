/*

 	Example: Declare an array of integers with 10 positions, than read and storage values 
 	for each position. Next, using only integer pointers change the position of the second 
 	biggest value in the array by the second lowest value. 
 	Youtube lesson: https://youtu.be/DnaQ6HAb7Dc
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int array[10], aux, *second_biggest, *second_smallest, *biggest, *smallest;
	int i;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &array[i]);
	}
	
	second_biggest = array;
	second_smallest = array;
	biggest = array;
	smallest = array;
	
	for(i = 0; i < 10; i++){
		if(*biggest < array[i]){
			second_biggest = biggest;
			biggest = &array[i];
		}
		else if(*second_biggest < array[i]){
			second_biggest = &array[i]; 
		}
		
		if(*smallest > array[i]){
			second_smallest = smallest;
			smallest = &array[i];
		}
		else if(*second_smallest > array[i]){
			second_smallest = &array[i]; 
		}
		
	}
	
	//changing the positions
	aux = *second_biggest;
	*second_biggest = *second_smallest;
	*second_smallest = aux;
	
	for(i = 0; i < 10; i++){
		printf("%d ", array[i]);
	}
	
	printf("\n");
	
	return 0;
}
