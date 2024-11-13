/*

 	Example:  Make a program that takes two words and concatenates them into a single sentence, 
 	where the two words are separated by space. 
 	Youtube lesson: https://youtu.be/RLZC9SOBtj4
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/
#include<stdio.h>
#include<string.h>
int main()
{
	char stringa[100], stringb[100];
	
	printf("Enter the first sentence:\n");
	scanf("%[^\n]", stringa);
	
	printf("Enter the second sentence:\n");
	scanf(" %[^\n]", stringb);
	
	stringa[strlen(stringa) + 1] = '\0';
	stringa[strlen(stringa)] = ' '; 
	
	strcat(stringa, stringb);
	
	printf("%s\n", stringa);

	return 0;
}
