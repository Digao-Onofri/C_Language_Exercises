/*

 	Example: Write a program that reads an integer value, and if that number is positive, 
 	calculate its square root. If it is a negative number, calculate its square.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*

	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<math.h>

int main() {
	int value;
	
	printf("Enter an integer number: ");
	scanf("%d", &value);
	
	if(value >= 0) {
		printf("The square root of %d is: %.2f\n", value, sqrt(value));
	}
	else {
		printf("The square of %d is: %.2f\n", value, pow(value, 2));
	}

	return 0;
}
