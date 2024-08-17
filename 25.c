/*

 	Example: Write a program that reads two grades from a student and checks whether their 
 	grades are valid. A valid grade is a grade between 0 and 10. If the grades are correct, 
 	calculate the average between them. If the grades are not validated, print the message 
 	"Invalid value of the grades".
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*

	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

int main() {
	float g1, g2;
	
	printf("Enter the two grades: \n");
	scanf("%f %f", &g1, &g2);
	
	if(g1 < 0 || g1 > 10 ) {
		while(g1 < 0 || g1 > 10) {
			printf("Invalid value of grade 1\n");
			printf("Enter a valid value for grade 1: ");
			scanf("%f", &g1);
		}
	}
	
	if(g2 < 0 || g2 > 10 ) {
		while(g2 < 0 || g2 > 10) {
			printf("Invalid value of grade 2\n");
			printf("Enter a valid value for grade 2: ");
			scanf("%f", &g2);
		}
	}
	
	printf("The average between the grades is: %.2f\n", (g1 + g2) / 2.0);
	
	return 0;
}
