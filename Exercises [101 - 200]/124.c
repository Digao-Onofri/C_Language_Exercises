/*

 	Example:  Make a program that declares a structure for the registration of N students, where 
 	the user informs N. Store the following information about the students: enrollment, full 
 	name, and age. Using pointer arithmetic, read the information from N students, and 
 	then show the name of the oldest student and the youngest student. 
 	Youtube lesson: https://youtu.be/XZgZ2pklqTc
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>

typedef struct registration {
	char enroll[50];
	char name[50];
	int age;
} registration;

int main() {
	int N;
	printf("Amount of registers:\n");
	scanf("%d", &N);
	
	registration v[N];
	int i, *older, *younger, oldest = 0, youngest = 0;
	
	for(i = 0; i < N; i++) {
		printf("Enter the enrollment number:\n");
		scanf(" %s", v[i].enroll);
		printf("Enter the name:\n");
		scanf(" %[^\n]", v[i].name);
		printf("Enter the age:\n");
		scanf(" %d", &v[i].age);
	}
	
	older = &v[0].age;
	younger = &v[0].age;
	for(i = 0; i < N; i++) {
		if(*older < v[i].age) {
			oldest = i;
			older = &v[i].age;
		}
		if(*younger > v[i].age){
			youngest = i;
			younger = &v[i].age;
		}
	}
	
	printf("Oldest: %s\n", v[oldest].name);
	printf("Newest: %s\n", v[youngest].name);

	return 0;
}
