/*

 	Example:  Create a structure representing a student's data: enrollment, name, first test 
 	grade, second test grade, and third test grade. Next: a) enter the data of 5 students. b) 
 	find the student with the highest score in the first test, printing his full name and the 
 	grade, with 2 decimal places. c) find the student with the highest overall average, printing 
 	his full name, followed by the average, with 2 decimal places. d) print a list of enrollment 
 	and name, also saying whether each student was approved or failed, considering at least 60% 
 	of the average for approval 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>
#define N 2

typedef struct student{
	char enrol_num[50];
	char name[50];
	float n1, n2, n3;
} student;

int main()
{
	student a[N];
	int i, idx = 0;
	float average = 0, grade = 0, biggest = 0;
	
	for(i = 0; i < N; i++){
		printf("Enter your enrollment number:\n");
		scanf(" %s", a[i].enrol_num);
		printf("Enter your name:\n");
		scanf(" %[^\n]", a[i].name);
		printf("Enter your three grades:\n");
		scanf(" %f %f %f", &a[i].n1, &a[i].n2, &a[i].n3);
	}
	
	//biggest grade in the first test
	grade = a[0].n1; 
	for(i = 0; i < N; i++){
		if(a[i].n1 > grade){
			grade = a[i].n1;
			idx = i;
		}
	}
	
	printf("Biggest grade in T1: %.2f\n%s\n\n", grade, a[idx].name);
	
	//searching the student with the highest average
	biggest = average;
	idx = 0;
	for(i = 0; i < N; i++){
		average = (a[i].n1 + a[i].n2 + a[i].n3) / 3;
		if(biggest < average){
			biggest = average;
			idx = i;
		}
		average = 0;
	}
	
	printf("Biggest average: %s\nValue: %.2f\n\n", a[idx].name, biggest);
	
	//Checking if the student gets the minimum average
	for(i = 0; i < N; i++){   
	   	average = (a[i].n1 + a[i].n2 + a[i].n3) / 3;
		if(average < 6.0){
			printf("%s %s Disapproved\n", a[i].enrol_num, a[i].name);
		}
		else{
			printf("%s %s Approved\n", a[i].enrol_num, a[i].name);
		}	
	}
	
	return 0;
}
