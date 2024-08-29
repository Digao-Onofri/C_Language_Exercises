/*

 	Example: Write a program, which read the age, the gender and say if this person will
  	grow up more.  
 	Youtube lesson: https://youtu.be/iRsH2Sb-vlU
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

#include<stdio.h>
int main()
{
	int age;
	char gender;
	
	printf("Enter your age: ");
	scanf("%d", &age);
	
	printf("Enter your gender (M/F): ");
	scanf(" %c", &gender);
	
	if(age > 21 && gender == 'M'){
		printf("No\n");
	}
	else if(age > 18 && gender == 'F'){
		printf("No\n");
	}
	else {
		printf("Yes\n");
	}
	
	
	return 0;
}
