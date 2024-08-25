/*

 	Example: Write a program, which read the age of a swimming athlete and classify the
 	category. Children 1, Children 2, young and adult.
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:\n");
	scanf("%d", &age);
	if(age >= 4 && age <=5){
		printf("Children 1\n");
	}
	else if(age >=6 && age <= 12){
		printf("Children 2\n");
	}
	else if(age >= 13 && age <= 18){
		printf("Young\n");
	}
	else if(age > 18){
		printf("Adult\n");
	}

	return 0;
}
