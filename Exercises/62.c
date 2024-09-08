/*

 	Example:  Make a program that reads 6 integers and stores them in an array. Then print on a 
 	single line which are the largest and second largest elements present in the array.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>
#define MAX 6
int main()
{
	int array[MAX], i, largest, second_largest;
	
	for(i = 0 ; i < MAX; i++){
		printf("Enter the value placed in the position: [%d]\n", i);
		scanf("%d", &array[i]);
	}
	
	largest = array[0];
	second_largest = 0;
	
	for(i = 0; i < MAX; i++){
		if(largest < array[i]){
			second_largest = largest;
			largest = array[i];
		}
		else if(second_largest < array[i]){
			second_largest = array[i];
		}
	}
	
	printf("The largest value in the vector is: %d \n", largest);
	printf("The second largest value in the vector is: %d \n", second_largest);

	return 0;
}
