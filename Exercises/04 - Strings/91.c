/*

 	Example:  Make a program that reads an sentence, a character, and an integer. Your 
 	program should return the index of the first position of the string where the character 
 	was found, and the search starts from position of the integer. If the searched character 			 
 	does not exist, print -1. 
 	Youtube lesson: https://youtu.be/VSgNRvJ82-U
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], character;
	int integer, k, control = 0;
	
	printf("Enter a sentence\n");
	scanf(" %[^\n]", a);
	
	printf("Enter a character\n");
	scanf(" %c", &character);
	
	printf("Enter an integer\n");
	scanf("%d", &integer);
	
	for(k = 0; k < strlen(a); k++){
		if(k >= integer && a[k] == character){
			printf("The position of the character in the array is: %d\n", k);
			control = 1;
			return 0;
		}
	}
	
	if(control == 0){
		printf("-1\n");
	}
	
	return 0;
}
