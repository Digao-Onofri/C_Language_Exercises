/*

 	Example:  Make a program that takes a sentence and converts the first letter of each word to 
 	uppercase. 
 	Youtube lesson: 
 	Author : Rodrigo Onofri @ www.youtube.com/@RodrigoOnofri
 	
*/

/*
	
	Link for the script is on the video description!
	Subscribe for regular content!

*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100];
	int i;
	
	fgets(a, 100, stdin);
	
	a[0] = toupper(a[0]);
	
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] == ' ')
		{
			a[i + 1] = toupper(a[i + 1]);
		}
	}
	
	printf("%s", a);
	
	return 0;
}
