/*

 	Example:  Make a program that reads, indefinitely, integer values. Whenever the user enters 
 	a number odd, store it in a 10-position array. Once the odd tenth number is stored, close 
 	the reading and print, in a single line, the elements of the vector separated from each 
 	other by a single space. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>
#define MAX 10
int main()
{
	int odd[MAX], i = 0, integer;
	
	while(i < MAX){
		scanf("%d", &integer);
		if(integer % 2 != 0){
			odd[i] = integer;
			i++;
		}
	}
	
	printf("The odd numbers in the array are:\n");
	
	for(i = 0; i < MAX; i++) {
		printf("%d ", odd[i]);
	}
	
	printf("\n");
	
	return 0;
}
