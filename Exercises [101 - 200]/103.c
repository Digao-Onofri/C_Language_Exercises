/*

 	Example:  Make a program that reads a person's name, age, and address (street and number) 
 	and stores the data in a structure. Show stored information on the screen 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>

typedef struct address{
	char street[100];
	int num;
} address;

typedef struct person{
	char name[50];
	int age;
	address ender;
	
}person;

int main()
{
	person a;

	printf("Enter your name:\n");
	scanf("%[^\n]", a.name);
	
	printf("Enter your age:\n");
	scanf(" %d", &a.age);
	
	printf("Enter your street:\n");
	scanf(" %[^\n]", a.ender.street);
	
	printf("Enter the number:\n");
	scanf(" %d", &a.ender.num);
	
	printf("Name: %s\nAge: %d\nAddress: %s, %d\n", a.name, a.age, a.ender.street, a.ender.num);

	return 0;
}
