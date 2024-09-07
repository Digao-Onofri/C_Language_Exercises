/*

 	Example: Write a program that reads an integer value and calculates whether the value 
 	multiple of 11. If it is a multiple, print yes. Otherwise, print no.
 	Youtube lesson: https://youtu.be/LlIh3Jx7gj4
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main() {
	int value;
	
	printf("Enter an integer value:");
	scanf("%d", &value);
	
	if(value % 11 != 0) {
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}

	return 0;
}
