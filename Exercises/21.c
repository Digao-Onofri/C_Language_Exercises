/*

 	Example: Write a program that reads two values ​​and displays the smallest
 	Youtube lesson: https://youtu.be/Yw_DuY44zYI
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main() {
	int v1, v2;
	
	printf("Enter two values:\n");
	scanf("%d %d", &v1, &v2);
	
	if(v1 > v2) {
		printf("The smallest value is: %d\n", v2);
	}
	else {
		printf("The smallest value is: %d\n", v1);
	}
	
	return 0;
}
