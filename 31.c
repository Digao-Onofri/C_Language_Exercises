/*

 	Example: Write a program that reads the worker's age and working time and then shows whether 
 	he could rest. The conditions for rest are: Being at least 65 years old or working for 30 
 	years or being at least 60 years old and working for 25 years.
 	Youtube lesson: https://youtu.be/VEs7ubfiW0U
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

#include<stdio.h>
//start of the program
int main()
{
	int age, years_working;
	
	printf("Enter your age:\n");
	scanf("%d", &age);
	printf("Enter the amount of working years:\n");
	scanf("%d", &years_working);
	if(age >= 65 || years_working >= 30){
		printf("sim\n");
	} 
	else if(age >= 60 && years_working >= 30){
		printf("sim\n");
	}
	else {
		printf("nao\n");
	}
	
	return 0;
}
