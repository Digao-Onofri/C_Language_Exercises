/*

 	Example: Make a program that reads the worker's salary and the loan payment amount. If the
 	payment is more than 20% of the worker's salary, display the message: “loan not granted”. 
 	Otherwise, show the message: “loan granted”.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*

	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

int main() {
	float salary, loan;
	
	printf("Enter your salary: ");
	scanf("%f", &salary);
	
	printf("Enter loan payment amount: ");
	scanf("%f", &loan);
	
	if((salary * 20) / 100.0 < loan){
		printf("Loan not granted\n");
	}
	else {
		printf("Loan granted\n");
	}
	
	return 0;
}
