/*

 	Example:  Make a program that reads, indefinitely, integer values. Whenever the user enters 
 	an odd number, store it in a 10-position array. Once the odd tenth number is stored, close 
 	the reading and print, in a single line, the elements of the array separated from each 
 	other by a single space. 
 	Youtube lesson: https://youtu.be/q2R_SM9_5oc
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
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
