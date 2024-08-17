/*

 	Example: Write a program that reads a year and checks if it is a leap year. A leap year 	
 	is divisible by 400, or if it is divisible by 4, but not by 100. Then, print as an answer 	
 	whether it is or not
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*

	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

int main() {
	int year;
	
	printf("Enter a year: ");
	scanf("%d", &year);

	if(year % 400 == 0) {
		printf("It's a leap year\n");
	}
	else if(year % 4 == 0 && year % 100 != 0) {
		printf("It's a leap year\n");
	}
	else {
		printf("It's not a leap year\n");
	}

	return 0;
}
