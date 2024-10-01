/*

 	Example:  Create a structure to store a student's data: name, enrollment number, and course. 
 	Read the information from 5 students and store it in a vector of this structure. Next, print 
 	the data of all students on the screen. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#define N 5

typedef struct student{
	char name[100];
	char enrol_num[100];
	char course[100];
} student;

int main()
{
	student a[N];
	int i;
	
	for(i = 0; i < N; i++){
		printf("Enter your name:\n");
		scanf(" %[^\n]", a[i].name);
		printf("Enter your enrollment number:\n");
		scanf(" %s", a[i].enrol_num);
		printf("Enter your course:\n");
		scanf(" %[^\n]", a[i].course);
	}
	
	for(i = 0; i < N; i++){
		printf("Student %d:\nName: %s\nEnrollment number: %s\nCourse: %s\n\n", i + 1, a[i].name, a[i].enrol_num, a[i].course);
	}

	return 0;
}
