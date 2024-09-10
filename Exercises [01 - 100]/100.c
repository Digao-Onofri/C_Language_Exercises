/*

 	Example:  Make a program that takes two words and concatenates them into a single sentence, 
 	where the two words are separated by space. 
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
	char a[100], b[100];
	int i;
	
	fgets(a, 100, stdin);
	fgets(b, 100, stdin);
	
	for(i = 0; i < strlen(a); i++)
	{
		if(a[i] == '\n')
		{
			a[i] = ' ';
		}
	}
	strcat(a, b);
	
	printf("%s", a);

	return 0;
}
