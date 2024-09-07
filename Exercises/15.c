/*

 	Example: Make a program that read two values. Next, show the remainder of the division 
 	between the two values.
 	Youtube lesson: https://youtu.be/mvl3yCzj3Kk
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main() {
	int v1, v2;
	
	printf("Enter two values:\n");
	scanf("%d %d", &v1, &v2);
	
	printf("Remainder of the division is: %d\n", v1%v2);

	return 0;
}
