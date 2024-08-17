/*

 	Example: Write a program that reads an integer and prints whether it is odd or even. 	
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*

	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

int main() {
	int value;
	
	printf("Enter an integer: ");
	scanf("%d", &value);
	
	if(value % 2 == 0) {
		printf("Even\n");
	}
	else {
		printf("Odd\n");
	}

	return 0;
}
