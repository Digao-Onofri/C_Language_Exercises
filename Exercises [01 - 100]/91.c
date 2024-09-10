/*

 	Example:  Make a program that reads an F sentence, a C character, and an I integer. Your 
 	program should return the index of the first position of the string where the C character 
 	was found, and the search starts from position I. If the searched character does not exist, 
 	print -1. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/

#include<stdio.h>
#include<string.h>
int main()
{
	char a[100], c;
	int i, k, control = 0;
	
	fgets(a, 100, stdin);
	scanf(" %c %d", &c, &i);
	
	for(k = 0; k < strlen(a); k++)
	{
		if(k >= i && a[k] == c)
		{
			printf("%d", k);
			return 0;
		}
	}
	
	if(control == 0)
	{
		printf("-1");
	}
	
	return 0;
}
