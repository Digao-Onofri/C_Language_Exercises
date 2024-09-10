/*

 	Example:  Make a program that reads 6 integers and stores them in an array. Then print on a 
 	single line the positions of the largest and smallest elements present in the array.
 	Youtube lesson: https://youtu.be/9kvNEmMVqQE
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#define MAX 6
int main()
{
	int i, array[MAX], largest, smallest, posx, posy;
	
	printf("Enter %d integers:\n", MAX);
	
	for(i = 0; i < MAX; i++){
		scanf("%d",&array[i]);
	}
	
	largest = array[0];
	smallest = array[0];
	posx = 0;
	posy = 0;
	
	for(i = 0; i < MAX; i++){
		if(largest < array[i]){
			largest = array[i];
			posx = i;
		}
		else if(smallest > array[i]){
			smallest = array[i];
			posy = i;
		}
	}
	
	printf("The position of the biggest value is: %d\n", posx);
	printf("The position of the smallest value is: %d\n", posy);	
	
	return 0;
}
