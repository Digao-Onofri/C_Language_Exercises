/* 

	Example: Write a program that reads the amount of days lived and show the number of years, 
	months and days this person lived. Consider that every year will have 365 days and the 
	months 30 days.
 	Youtube lesson: https://youtu.be/o8cwTowAY_o
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri

*/
#include<stdio.h>
int main() {
	int days_lived;
	int years, months, days;
	
	printf("Enter the amount of days lived: ");
	scanf("%d", &days_lived);
	
	years = days_lived / 365.0 ;
	months = (days_lived % 365) / 30.0;
	days = (days_lived % 365)  % 30;

	printf("%d years, %d months and %d days\n", years, months, days);


	return 0;
}
