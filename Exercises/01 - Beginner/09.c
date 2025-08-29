/*

 	Example: Write a program that reads three values, representing age in years, months and 	
 	days, respectively. Next, show the number of days this person lived. Consider that every 
 	year will have 365 days, and the months 30 days.
 	Youtube lesson: https://youtu.be/bLSAetZGhgE
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
int main() {
	int years, months, days;
	
	printf("Enter your age in years, months and days respectively");
	scanf("%d %d %d", &years, &months, &days);

	printf("The amount of days that you lived are: %d", (years * 365) + (months * 30) + days);
	
	return 0;
}
