/*

 	Example: A group of friends want to rent a car. They checked two agencies, the first 
 	charges $62 per day and $1.4 per mile traveled. The second charges $80 per day and $1.2 
 	per mile traveled. Make a program that reads the number of miles to be covered and the 
 	amount of car rental days. Afterwards, show the lowest price between the two agencies as 
 	an answer.
 	Youtube lesson: https://youtu.be/v_Qw6UEEwSw
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

#include<stdio.h>

int main() {
	int days, miles;
	float agency1, agency2;
	
	printf("Enter the amount of days: ");
	scanf("%d", &days);
	
	printf("Enter the amount of mile traveled: ");
	scanf("%d", &miles);
	
	agency1 = (62 * days) + (1.40 * miles);
	agency2 = (80 * days) + (1.20 * miles);
	
	if(agency1 < agency2) {
		printf("The lowest agency is the first one, which charges $%.2f\n", agency1);
	}
	else {
		printf("The lowest agency is the second one, which charges $%.2f\n", agency2);
	}
	
	return 0;
}

