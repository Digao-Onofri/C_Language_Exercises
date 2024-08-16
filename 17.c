/*

 	Example: A student wants to know the percentage of absences from classes in a subject. 
 	Make a program that reads the total hours of this subject and the number of absense hours . 	
 	Next, show the percentage of absences from classes for this student (integer between 0 and 
 	100).
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/


#include<stdio.h>

int main() {	
	int total_hours, absense_hours;
	
	printf("Enter the total and absense hours:\n");
	scanf("%d %d", &total_hours, &absense_hours);
	
	printf("Absense hours percentage: %d\n", (absense_hours * 100) / total_hours);

	return 0;
}
