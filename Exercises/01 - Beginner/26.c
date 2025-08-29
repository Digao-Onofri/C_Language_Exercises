/*

 	Example: Make a program that reads the worker's salary and the loan payment amount. If the
 	payment is more than, or equal to, 20% of the worker's salary, display the message: “loan 
  	not granted”. Otherwise, show the message: “loan granted”.
 	Youtube lesson: https://youtu.be/U4Pp_QQj5R0
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main() {
	float salary, loan;
	
	printf("Enter your salary: ");
	scanf("%f", &salary);
	
	printf("Enter loan payment amount: ");
	scanf("%f", &loan);
	
	if((salary * 20) / 100.0 <= loan){
		printf("Loan not granted\n");
	}
	else {
		printf("Loan granted\n");
	}
	
	return 0;
}
